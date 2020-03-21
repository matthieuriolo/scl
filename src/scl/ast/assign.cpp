#include "scl/ast/assign.hpp"

#include <string>
#include <iostream>

namespace SCL {
	namespace AST {
		Assign::Assign(SCL::AST::Variable *variable, SCL::AST::Expression *expression) {
			this->variable = variable;
			this->expression = expression;
		}

		void Assign::execute(SCL::Context * ctx) {
			ctx->setValue(variable->getName(), expression->compute(ctx));
		}

		void Assign::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "instruction.assign\n";
			std::cout << std::string(level * 2, ' ') << " variable:\n";
			variable->printAST(level+1);
			std::cout << std::string(level * 2, ' ') << " expression:\n";
			expression->printAST(level+1);
		}
	}
}