#include "scl/ast/variable.hpp"
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
	}
}