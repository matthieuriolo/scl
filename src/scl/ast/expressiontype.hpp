#ifndef __SCL_AST_EXPRESSIONTYPE__
#define __SCL_AST_EXPRESSIONTYPE__

#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class ExpressionType : public Expression {
			private:
				SCL::Type * type;
			public:
				ExpressionType(SCL::Type* type);
				SCL::Type *compute(SCL::Context *ctx);

				void printAST(int level);
		};
	}
}

#endif