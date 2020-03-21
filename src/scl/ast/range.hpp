#ifndef __SCL_AST_RANGE__
#define __SCL_AST_RANGE__

#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class Range : public SCL::AST::Expression {
			private:
				SCL::AST::Expression *expression;
				SCL::AST::Expression *start;
				SCL::AST::Expression *end;
				
			public:
				Range(SCL::AST::Expression *expression, SCL::AST::Expression *start, SCL::AST::Expression *end);

				SCL::Type *compute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif