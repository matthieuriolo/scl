#include <iostream>
#include <string.h>

#include "scl/parserresult.hpp"


void help() {
	std::cout << "SCL - System Control Language\n";
	std::cout << "subcommands:\n";
	std::cout << "  help     shows this help text\n";
	std::cout << "  run      executes the given scl files\n";
	std::cout << "  ast      displays the ast of the given scl files\n";
	std::cout << "  parse    displays the parser trace given scl files\n";
}

int main(int argc, char **argv) {
	if(argc < 2) {
		help();
		return 0;
	}

	if(strcasecmp(argv[1], "help") == 0) {
		help();
		return 0;
	}else {
		bool displayAST = false;
		bool displayTrace = false;

		if(strcasecmp(argv[1], "ast") == 0) {
			displayAST = true;
		}else if(strcasecmp(argv[1], "parse") == 0) {
			displayTrace = true;
		}else if(strcasecmp(argv[1], "run") != 0) {
			std::cout << "Unknown command '" << argv[1] << "'\n";
			help();
			return 1;
		}

		for(int i = 2; i < argc; i++) {
			try {
				SCL::ParserResult res;
				res.trace_parsing = res.trace_scanning = displayTrace;
				if(res.parse(argv[i]) == 0) {
					if(!displayTrace) {
						if(displayAST) {
							res.module->printASTTree();
						}else {
							res.module->launch();
						}
					}
				}else {
					std::cout << "failure while parsing file '" << argv[i] << "'\n";
				}
			}catch(const std::exception* e) {
				std::cout << "Standard exception: " << e->what() << std::endl;
			}
		}
	}
}