#ifndef __SCL_AST_OPERAND__
#define __SCL_AST_OPERAND__


#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		enum Operand_Type {
			PLUS,
			MINUS,
			ASTERISK,
			SLASH,
			CARET
		};

		class Operand : public SCL::AST::Expression {
			private:
				Operand_Type operand;
				SCL::AST::Expression *left;
				SCL::AST::Expression *right;

			public:
				Operand(Operand_Type operand, SCL::AST::Expression *left, SCL::AST::Expression *right);
				SCL::Type *compute(SCL::Context *ctx);
		};
	}
}

#endif