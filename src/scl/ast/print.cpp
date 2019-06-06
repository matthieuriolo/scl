#include "scl/ast/print.hpp"
#include <iostream>

namespace SCL {
	namespace AST {
		Print::Print(SCL::AST::Variable *variable) {
			this->variable = variable;
		}

		void Print::execute(SCL::Context * ctx) {
			std::cout << ctx->getValue(variable)->stringify() << "\n";
		}
	}
}