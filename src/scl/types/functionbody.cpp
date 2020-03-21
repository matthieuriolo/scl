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
namespace SCL {
	namespace Types {
		FunctionBody::FunctionBody(std::vector<SCL::Types::FunctionParameter*> parameters, SCL::Scope* scope) {
			this->parameters = parameters;
			this->scope = scope;
		}

		bool FunctionBody::matchingParameters(std::list<std::string> arguments) {
			/*for(auto arg : parameters) {
				for(auto name : arg->externNames) {
					std::cout << name << "\n";
				}
			}*/


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
						opt.val = 1234;

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

			while((c = getopt_long(args.size(), (char *const *)args.data(), optstring.c_str(), options, &option_index)) != -1) {
				switch(c) {
					/* TODO: we need to ensure that that the given paraments are REQUIRED and not only tested if others available */
					case ':':
					case '?':
						std::cout << " failure\n";
						return false;
				}
			}

			return true;
		}

		SCL::Type *FunctionBody::execute(SCL::Context *ctx, std::list<std::string> arguments) {
			SCL::Context *newCtx = new SCL::Context(ctx);
			/*for(auto a : arguments) {
				std::cout << a << "\n";
			}*/
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
								val = new SCL::Types::String(getoptParam);
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

										//todo: better handling of none string types
										val = new SCL::Types::String(getoptParam);

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