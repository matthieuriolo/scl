#ifndef __SCL_AST_DICTIONARY__
#define __SCL_AST_DICTIONARY__

#include "scl/ast/expression.hpp"
#include <map>

namespace SCL {
	namespace AST {
		class Dictionary : public Expression {
			private:
				std::map<Expression*, Expression *> values;
			public:
				Dictionary();
				void add(Expression *key, Expression *value);
				SCL::Type *compute(SCL::Context *ctx);
				void printAST(int level);
		};
	}
}

#endif