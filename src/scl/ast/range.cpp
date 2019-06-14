#include "scl/ast/range.hpp"


namespace SCL {
	namespace AST {
		Range::Range(SCL::AST::Expression *expression, SCL::AST::Expression *start, SCL::AST::Expression *end) {
			this->expression = expression;
			this->start = start;
			this->end = end;
		}

		SCL::Type *Range::compute(SCL::Context * ctx) {
			return expression->compute(ctx)->getRange(start ? start->compute(ctx) : NULL, end ? end->compute(ctx) : NULL);
		}
	}
}