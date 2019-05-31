#include "scl/ast/operand.hpp"

namespace SCL {
	namespace AST {
		Operand::Operand(Operand_Type operand, SCL::AST::Expression *left, SCL::AST::Expression *right) {
			this->operand = operand;
			this->left = left;
			this->right = right;
		}

		SCL::Type *Operand::compute(SCL::Context *ctx) {
			switch(this->operand) {
				case PLUS:
					return left->compute(ctx)->operator_plus(ctx, right->compute(ctx));
				case MINUS:
					return left->compute(ctx)->operator_minus(ctx, right->compute(ctx));
				case ASTERISK:
					return left->compute(ctx)->operator_asterisk(ctx, right->compute(ctx));
				case SLASH:
					return left->compute(ctx)->operator_slash(ctx, right->compute(ctx));
				case CARET:
					return left->compute(ctx)->operator_caret(ctx, right->compute(ctx));
			}

			throw new std::logic_error("invalid operand type");
		}
	}
}