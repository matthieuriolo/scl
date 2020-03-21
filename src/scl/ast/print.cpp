#include "scl/ast/print.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Print::Print(SCL::AST::Variable *variable) {
			this->variable = variable;
		}

		void Print::execute(SCL::Context * ctx) {
			std::cout << ctx->getValue(variable)->stringify() << "\n";
		}

		void Print::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.print\n";
			std::cout << std::string((level+1) * 2, ' ') << "variable:\n";
			variable->printAST(level+2);
		}
	}
}