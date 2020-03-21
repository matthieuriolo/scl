#include "scl/ast/printStatic.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		PrintStatic::PrintStatic(SCL::Type *type) {
			this->type = type;
		}

		void PrintStatic::execute(SCL::Context * ctx) {
			std::cout << type->stringify() << "\n";
		}

		void PrintStatic::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.printStatic\n";
			std::cout << std::string((level+1) * 2, ' ') << "type: " << type->stringify() << "\n";
		}
	}
}