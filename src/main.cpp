#include <iostream>
#include "scl/parserresult.hpp"


int main(int argc, char **argv) {
	SCL::ParserResult res;

	for(int i = 1; i < argc; i++) {
		if(res.parse(argv[i]) == 0) {
			res.module->launch();
		}else {
			std::cout << "failure\n";
		}
	}
}