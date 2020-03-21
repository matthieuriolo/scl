#include "scl/ast/variable.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Variable::Variable(std::string name) {
			this->name = name;
		}

		SCL::Type *Variable::compute(SCL::Context *ctx) {
			return ctx->getValue(this);
		}

		std::string Variable::getName() {
			return name;
		}

		void Variable::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "expression.variable\n";
			std::cout << std::string((level+1) * 2, ' ') << "name: $" << name << "\n";
		}
	}
}