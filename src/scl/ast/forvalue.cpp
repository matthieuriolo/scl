#include "scl/ast/forvalue.hpp"

namespace SCL {
	namespace AST {
		ForValue::ForValue(SCL::AST::Variable *variable, SCL::AST::Expression *expression, SCL::Scope *scope) {
			this->variable = variable;
			this->expression = expression;
			this->scope = scope;
		}

		void ForValue::execute(SCL::Context * ctx) {
			SCL::Types::Iterator *iter = expression->compute(ctx)->iterator();

			if(iter == NULL) {
				throw new std::logic_error("expression is not iterable");
			}

			SCL::Type *val;
			while((val = iter->next()) != NULL) {
				SCL::Context *newCtx = new SCL::Context(ctx);
				newCtx->setValue(variable, val);
				scope->execute(newCtx);
				delete(newCtx);
			}
		}
	}
}