#include "scl/types/functionbody.hpp"

#include "scl/types/boolean.hpp"
#include "scl/types/string.hpp"
#include "scl/ast/variable.hpp"

#include <iostream>

#include <vector>
#include <algorithm>
#include <getopt.h>

#include <iostream>
#include <string>
#include <regex>

namespace SCL {
	namespace Types {
		FunctionBody::FunctionBody(std::vector<SCL::Types::FunctionParameter*> parameters, SCL::Scope* scope) {
			this->parameters = parameters;
			this->scope = scope;
		}

		bool FunctionBody::matchingParameters(std::list<std::string> arguments) {
			if(parameters.size() == 0) {
				return true;
			}

			/* construct getopt options*/

			std::list<struct option> long_options;
			std::string optstring;

			for(auto param : parameters) {
				for(auto name : param->externNames) {
					if(name.size() == 1) {
						optstring = optstring + name;

						if(!param->isFlag) {
							optstring = optstring + ":";
						}
					}else {
						option opt;
						opt.name = strdup(name.c_str());
						opt.has_arg = param->isFlag ? no_argument : required_argument;
						opt.flag = NULL;
						opt.val = 0;

						long_options.push_back(opt);
					}
				} 
			}

			option opt;
			opt.name = NULL;
			opt.has_arg = 0;
			opt.flag = NULL;
			opt.val = 0;

			long_options.push_back(opt);
			
			option *options = new option[long_options.size()];
			copy(long_options.begin(), long_options.end(), options);

			int option_index = 0;
			opterr = 0;
			optind = 0;
			int c;

			std::vector<const char*> args;
			args.push_back("acommand");
			for(auto a : arguments) {
				args.push_back(strdup(a.c_str()));
			}


			std::vector<SCL::Types::FunctionParameter*> usedParameters(parameters);
			//remove flags&optional parameters
			for(auto it = usedParameters.begin(); it != usedParameters.end();) {
				auto param = *it;
				if(param->isFlag || param->defaultValue != NULL) {
					it = usedParameters.erase(it);
				}else {
					it++;
				}
			}

			while((c = getopt_long(args.size(), (char *const *)args.data(), optstring.c_str(), options, &option_index)) != -1) {
				switch(c) {
					case ':':
					case '?':
						return false;
					case 0://long param
						for(auto it = usedParameters.begin(); it != usedParameters.end(); ++it) {
							auto param = *it;
							auto iter = std::find(param->externNames.begin(), param->externNames.end(), parameters[option_index]->externNames.front());
							if(iter != param->externNames.end()) {
								usedParameters.erase(it);
								break;
							}
						}
						break;
					default:
						for(auto it = usedParameters.begin(); it != usedParameters.end(); ++it) {
							auto param = *it;
							auto iter = std::find(param->externNames.begin(), param->externNames.end(), std::string(1, (char)c));
							if(iter != param->externNames.end()) {
								usedParameters.erase(it);
								break;
							}
						}
						break;
				}
			}

			if(usedParameters.size() > 0) {
				return false;
			}

			return true;
		}

		SCL::Type *FunctionBody::execute(SCL::Context *ctx, std::list<std::string> arguments) {
			SCL::Context *newCtx = new SCL::Context(ctx);
			
			if(parameters.size() == 0) {
				scope->execute(newCtx);
				delete(newCtx);
				return NULL;
			}

			
			/* construct getopt options - cheap copy&paste from the previous method */
			std::list<struct option> long_options;
			std::string optstring;
			for(auto param : parameters) {
				for(auto name : param->externNames) {
					if(name.size() == 1) {
						optstring = optstring + name;
						if(!param->isFlag) {
							optstring = optstring + ":";
						}
					}else {
						option opt;
						opt.name = strdup(name.c_str());
						opt.has_arg = param->isFlag ? no_argument : required_argument;
						opt.flag = NULL;
						opt.val = 0;

						long_options.push_back(opt);
					}
				} 
			}

			option opt;
			opt.name = NULL;
			opt.has_arg = 0;
			opt.flag = NULL;
			opt.val = 0;

			long_options.push_back(opt);
			
			option *options = new option[long_options.size()];
			copy(long_options.begin(), long_options.end(), options);

			int option_index = 0;
			opterr = 0;
			optind = 0;
			int c;

			std::vector<const char*> args;
			args.push_back("acommand");
			for(auto a : arguments) {
				args.push_back(strdup(a.c_str()));
			}

			/* set all flags to false and set default values */
			for(auto param : parameters) {
				if(param->isFlag) {
					newCtx->setValue(param->internName, SCL::Types::Boolean::getFalse());
				}else if(param->defaultValue) {
					newCtx->setValue(param->internName, param->defaultValue->compute(ctx));
				}
			}

			while((c = getopt_long(args.size(), (char *const *)args.data(), optstring.c_str(), options, &option_index)) != -1) {
				const char *getoptParam = optarg ? strdup(optarg) : NULL;
				
				switch(c) {
					case 0://long param
						SCL::Type *val;
						if(parameters[option_index]->isFlag) {
							val = SCL::Types::Boolean::getTrue();
						}else if (getoptParam != NULL) {
							if(getoptParam[0] == '$') {
								val = newCtx->getValue(std::string(getoptParam).substr(1));
							}else {
								auto findVariableRegex = std::regex("\\$[a-zA-Z0-9]+");
								std::string txt = getoptParam;
								size_t start = 0;
								std::match_results<std::string::iterator> result;

								while(std::regex_search(
										txt.begin() + start,
										txt.end(),
										result,
										findVariableRegex
									)) {
									auto type = ctx->getValue(result.str().substr(1));
									std::string newString = result.prefix().str();
									newString += type->stringify();
									size_t n_start = newString.size();
									newString += result.suffix().str();
									txt = newString;
									start = n_start;
								}

								val = new SCL::Types::String(txt);
							}
						}else {
							throw new std::logic_error("could not parse parameters1");
						}
						newCtx->setValue(parameters[option_index]->internName, val);
						break;
					case ':':
					case '?':
						throw new std::logic_error("could not parse parameters2");
					default://short param
						//find the parameter with the given name
						bool foundParam = false;
						for(auto param : parameters) {
							if(foundParam) continue;
							
							auto iter = std::find(param->externNames.begin(), param->externNames.end(), std::string(1, (char)c));
							if(iter != param->externNames.end()) {
								SCL::Type *val;
								if(param->isFlag) {
									val = SCL::Types::Boolean::getTrue();
								}else if (getoptParam) {
									if(getoptParam[0] == '$') {
										val = newCtx->getValue(std::string(getoptParam).substr(1));
									}else {
										auto findVariableRegex = std::regex("\\$[a-zA-Z0-9]+");
										std::string txt = getoptParam;
										size_t start = 0;
										std::match_results<std::string::iterator> result;

										while(std::regex_search(
												txt.begin() + start,
												txt.end(),
												result,
												findVariableRegex,
												std::regex_constants::match_flag_type::match_continuous
											)) {
											auto type = ctx->getValue(result.str().substr(1));
											std::string newString = result.prefix().str();
											newString += type->stringify();
											size_t n_start = newString.size();
											newString += result.suffix().str();
											txt = newString;
											start = n_start;
										}
										
										val = new SCL::Types::String(txt);
									}
								}else {
									throw new std::logic_error("could not parse parameters3");
								}
								newCtx->setValue(param->internName, val);
								foundParam = true;
							}
						}

						if(!foundParam) {
							throw new std::logic_error("could not parse parameters4");
						}
				}
			}


			scope->execute(newCtx);
			delete(newCtx);

			return NULL;
		}


		void FunctionBody::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "type.functionBody\n";
			std::cout << std::string((level+1) * 2, ' ') << "parameters:\n";
			for(auto parameter : parameters) {
				parameter->printAST(level+2);
			}

			std::cout << std::string((level+1) * 2, ' ') << "body:\n";
			scope->printAST(level+2);
		}
	}
}