#ifndef __SCL_AST_UNARYMINUS__
#define __SCL_AST_UNARYMINUS__


#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class UnaryMinus : public SCL::AST::Expression {
			private:
				SCL::AST::Expression *expression;

			public:
				UnaryMinus(SCL::AST::Expression *expression);
				SCL::Type *compute(SCL::Context *ctx);
				void printAST(int level);

		};
	}
}

#endif