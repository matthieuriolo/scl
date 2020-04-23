#ifndef __SCL_AST_RANGEITERATOR__
#define __SCL_AST_RANGEITERATOR__

#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class RangeIterator : public SCL::AST::Expression {
			private:
				SCL::AST::Expression *start;
				SCL::AST::Expression *end;
				
			public:
				RangeIterator(SCL::AST::Expression *start, SCL::AST::Expression *end);

				SCL::Type *compute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif