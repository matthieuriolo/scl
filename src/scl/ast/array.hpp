#ifndef __SCL_AST_ARRAY__
#define __SCL_AST_ARRAY__

#include "scl/ast/expression.hpp"
#include <vector>

namespace SCL {
	namespace AST {
		class Array : public Expression {
			private:
				std::vector<Expression*> values;
			public:
				Array();
				void add(Expression* value);
				SCL::Type *compute(SCL::Context *ctx);
		};
	}
}

#endif