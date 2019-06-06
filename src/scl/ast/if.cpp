#include "scl/ast/if.hpp"
#include "scl/context.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace AST {
		If::If(SCL::AST::Expression *expression, SCL::Scope *scope) {
			this->expression = expression;
			this->scope = scope;
		}

		void If::execute(SCL::Context * ctx) {
			SCL::Type *type = expression->compute(ctx);

			if(type->toBoolean() == SCL::Types::Boolean::getFalse()) {
				return;
			}

			SCL::Context *newCtx = new SCL::Context(ctx);
			scope->execute(newCtx);
			delete(newCtx);
		}
	}
}