#include "scl/types/functionbody.hpp"

#include "scl/types/boolean.hpp"
#include "scl/types/string.hpp"
#include "scl/ast/variable.hpp"

#include <iostream>

#include <vector>
#include <algorithm>
#include <getopt.h>

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
						//opt.val = 'L';

						long_options.push_back(opt);
					}
				} 
			}

			option opt;
			opt.name = NULL;
			opt.has_arg = 0;
			opt.flag = NULL;

			long_options.push_back(opt);
			
			option *options = new option[long_options.size()];
			copy(long_options.begin(), long_options.end(), options);

			int option_index = 0;
			opterr = 0;
			optind = 1;
			int c;

			std::vector<const char*> args;
			//args.push_back("testing");
			for(auto a : arguments) {
				//std::cout << a << "\n";
				args.push_back(a.c_str());
			}

			while((c = getopt_long(args.size(), (char *const *)args.data(), optstring.c_str(), options, &option_index)) != -1) {
				switch(c) {
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
						opt.has_arg = param->isFlag ? 0 : 1;
						opt.flag = NULL;
						long_options.push_back(opt);
					}
				} 
			}

			option opt;
			opt.name = NULL;
			opt.has_arg = 0;
			opt.flag = NULL;

			long_options.push_back(opt);
			
			option *options = new option[long_options.size()];
			copy(long_options.begin(), long_options.end(), options);

			int option_index = 0;
			opterr = 0;
			optind = 1;
			int c;

			std::vector<const char*> args;
			args.push_back("internal-command");
			for(auto a : arguments) {
				args.push_back(strdup(a.c_str()));
			}

			/* set all flags to false and set default values */
			for(auto param : parameters) {
				if(param->isFlag) {
					ctx->setValue(param->internName, SCL::Types::Boolean::getFalse());
				}else if(param->defaultValue) {
					ctx->setValue(param->internName, param->defaultValue->compute(ctx));
				}
			}

			while((c = getopt_long(args.size(), (char *const *)args.data(), optstring.c_str(), options, &option_index)) != -1) {
				switch(c) {
					case 0:
						SCL::Type *val;
						if(parameters[option_index]->isFlag) {
							val = SCL::Types::Boolean::getTrue();
						}else if (optarg) {
							if(optarg[0] == '$') {
								val = ctx->getValue(std::string(optarg).substr(1));
							}else {
								val = new SCL::Types::String(optarg);
							}
						}else {
							throw new std::logic_error("could not parse parameters1");
						}

						ctx->setValue(parameters[option_index]->internName, val);
						break;
					case ':':
					case '?':
						throw new std::logic_error("could not parse parameters2");
					default:
						//find the parameter with the given name
						bool foundParam = false;
						for(auto param : parameters) {
							if(foundParam) continue;

							auto iter = std::find(param->externNames.begin(), param->externNames.end(), std::string(1, (char)c));

							if(iter != param->externNames.end()) {
								if(parameters[option_index]->isFlag) {
									val = SCL::Types::Boolean::getTrue();
								}else if (optarg) {
									if(optarg[0] == '$') {
										val = ctx->getValue(std::string(optarg).substr(1));
									}else {
										val = new SCL::Types::String(optarg);

									}
								}else {
									throw new std::logic_error("could not parse parameters3");
								}

								ctx->setValue(param->internName, val);
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
	}
}