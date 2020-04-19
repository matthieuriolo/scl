#include "scl/ast/print.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Print::Print(SCL::AST::Expression *expression) {
			this->expression = expression;
		}

		void Print::execute(SCL::Context * ctx) {
			std::cout << expression->compute(ctx)->stringify() << "\n";
		}

		void Print::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.print\n";
			std::cout << std::string((level+1) * 2, ' ') << "expression:\n";
			expression->printAST(level+2);
		}
	}
}