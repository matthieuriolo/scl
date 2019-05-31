#include "scl/ast/expressiontype.hpp"

namespace SCL {
	namespace AST {
		ExpressionType::ExpressionType(SCL::Type* type) {
			this->type = type;
		}

		SCL::Type *ExpressionType::compute(SCL::Context *ctx) {
			return type;
		}
	}
}