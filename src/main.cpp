#include <iostream>
#include "scl/parserresult.hpp"


int main(int argc, char **argv) {
	SCL::ParserResult res;
	try {
		for(int i = 1; i < argc; i++) {
			if(res.parse(argv[i]) == 0) {
				res.module->launch();
			}else {
				std::cout << "failure\n";
			}
		}
	}catch(const std::exception* e) {
		std::cout << "Standard exception: " << e->what() << std::endl;
	}
}