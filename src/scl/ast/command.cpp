#include "scl/ast/command.hpp"
#include "scl/types/function.hpp"

#include <iostream>
#include <array>
#include <vector>
#include <cstdio>
#include <string>
#include <unistd.h>
#include <regex>

namespace SCL {
	namespace AST {
		Command::Command(std::string commandpath) {
			this->commandpath = commandpath;
		}

		Command::Command(std::string commandpath, std::list<std::string> arguments) {
			this->commandpath = commandpath;
			this->arguments = arguments;
		}

		void Command::addArgument(std::string argument) {
			arguments.push_back(argument);
		}

		std::string* Command::findCommand(std::string cmd) {
			std::vector<std::string> paths = {
				"/usr/bin",
				"/bin",
				"/usr/sbin",
				"/sbin"
			};


			for(auto path : paths) {
				std::string *p = new std::string(path);
				p->append("/");
				p->append(cmd);

				if(!access(p->c_str(), X_OK)) {
					return p;
				}
			}

			return NULL;
		}

		void Command::executeCommand(SCL::Context * ctx) {
			std::string* path = findCommand(commandpath);
			if(path != NULL) {
				executeProcess(*path, ctx);
				return;
			}else {
				SCL::Types::Function *func = ctx->getFunction(commandpath);
				if(func != NULL) {
					func->execute(ctx, arguments);
					return;
				}
			}

			throw new std::logic_error(std::string("command `") + commandpath + std::string("` not found"));
		}

		void Command::executeProcess(std::string path, SCL::Context *ctx) {
			std::string cmd = std::string(path);
			for(auto arg : arguments) {
				cmd.append(" ");

				auto findVariableRegex = std::regex("\\$[a-zA-Z0-9]+");
				std::string txt = arg;
				size_t start = 0;
				std::match_results<std::string::iterator> result;
				
				while(std::regex_search(
						txt.begin() + start,
						txt.end(),
						result,
						findVariableRegex
					)) {

					auto type = ctx->getValue(result.str().substr(1));
					std::string newString = txt.substr(0, start);
					newString += type->stringify();
					size_t n_start = newString.size();
					newString += txt.substr(start + result.length());
					txt = newString;
					start = n_start;
				}

				cmd.append(txt);
			}

			FILE* pipe = popen(cmd.c_str(), "r");
			if(!pipe) {
				std::cout << "Failure executing '" << path << "'\n";
			}
			
			std::array<char, 128> buffer;
    		std::string result;
			
			while(!feof(pipe)) {
				if(fgets(buffer.data(), 128, pipe) != NULL) {
					result += buffer.data();
				}
			}

			std::cout << result;

			pclose(pipe);
		}

		void Command::execute(SCL::Context * ctx) {
			if(isCommand()) {
				executeCommand(ctx);
			}else {
				executeProcess(commandpath, ctx);
			}
		}

		void Command::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.command\n";
			std::cout << std::string((level+1) * 2, ' ') << "path: " << commandpath << "\n";
			std::cout << std::string((level+1) * 2, ' ') << "arguments:\n";

			for(auto arg : arguments) {
				std::cout << std::string((level+1) * 2, ' ') << arg <<"\n";
			}
		}


		bool Command::isAbsolutePath() {
			return commandpath.substr(0, 1) == "/";
		}

		bool Command::isRelativePath() {
			return commandpath.substr(0, 2) == "./" || commandpath.substr(0, 3) == "../";
		}

		bool Command::isCommand() {
			return !isAbsolutePath() && !isRelativePath();
		}
	}
}