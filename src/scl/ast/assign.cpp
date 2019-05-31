#include "scl/ast/assign.hpp"


namespace SCL {
	namespace AST {
		Assign::Assign(SCL::AST::Variable *variable, SCL::AST::Expression *expression) {
			this->variable = variable;
			this->expression = expression;
		}

		void Assign::execute(SCL::Context * ctx) {
			ctx->getScope()->setValue(variable->getName(), expression->compute(ctx));
		}
	}
}