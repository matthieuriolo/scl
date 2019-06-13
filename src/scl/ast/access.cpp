#include "scl/ast/access.hpp"


namespace SCL {
	namespace AST {
		Access::Access(SCL::AST::Expression *expression, SCL::AST::Expression *key) {
			this->expression = expression;
			this->key = key;
		}

		SCL::Type *Access::compute(SCL::Context * ctx) {
			return expression->compute(ctx)->getAccess(key->compute(ctx));
		}
	}
}