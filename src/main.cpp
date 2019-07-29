#include <iostream>
#include "scl/parserresult.hpp"


int main(int argc, char **argv) {
	for(int i = 1; i < argc; i++) {
		try {
			std::cout << "executing file " << argv[i] << "\n";
			SCL::ParserResult res;
			if(res.parse(argv[i]) == 0) {
				res.module->launch();
			}else {
				std::cout << "failure\n";
			}
		}catch(const std::exception* e) {
			std::cout << "Standard exception: " << e->what() << std::endl;
		}
	}
}