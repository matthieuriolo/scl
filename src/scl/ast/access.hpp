#ifndef __SCL_AST_ACCESS__
#define __SCL_AST_ACCESS__

#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class Access : public SCL::AST::Expression {
			private:
				SCL::AST::Expression *expression;
				SCL::AST::Expression *key;
				
			public:
				Access(SCL::AST::Expression *expression, SCL::AST::Expression *key);

				SCL::Type *compute(SCL::Context * ctx);
		};
	}
}

#endif