#ifndef __SCL_AST_COMPARATOR__
#define __SCL_AST_COMPARATOR__


#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		enum Comparator_Type {
			EQUAL,
			NOT_EQUAL,
			LESS,
			GREATER,
			LESS_EQUAL,
			GREATER_EQUAL
		};

		class Comparator : public SCL::AST::Expression {
			private:
				Comparator_Type operand;
				SCL::AST::Expression *left;
				SCL::AST::Expression *right;

			public:
				Comparator(Comparator_Type operand, SCL::AST::Expression *left, SCL::AST::Expression *right);
				SCL::Type *compute(SCL::Context *ctx);
				void printAST(int level);
		};
	}
}

#endif