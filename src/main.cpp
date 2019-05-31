#include <iostream>
#include "scl/parserresult.hpp"


int main(int argc, char **argv) {
	SCL::ParserResult res;

	if(res.parse("examples/1.scl") == 0) {
		std::cout << "successful - read in ";
		std::cout << res.module.instructions.size();
		std::cout << " instructions\n";

		res.module.execute();
	}else {
		std::cout << "failure\n";
	}
}