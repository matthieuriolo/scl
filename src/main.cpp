#include <iostream>
#include <string.h>

#include "scl/parserresult.hpp"


int main(int argc, char **argv) {
	for(int i = 1; i < argc; i++) {
		bool displayAST = false;

		if(strcasecmp(argv[i], "--ast") == 0) {
			continue;
		}else if(strcasecmp(argv[i - 1], "--ast") == 0) {
			displayAST = true;
		}

		try {
			SCL::ParserResult res;
			if(res.parse(argv[i]) == 0) {
				if(displayAST) {
					res.module->printASTTree();
				}else {
					res.module->launch();
				}
			}else {
				std::cout << "failure while parsing file '" << argv[i] << "'\n";
			}
		}catch(const std::exception* e) {
			std::cout << "Standard exception: " << e->what() << std::endl;
		}
	}
}