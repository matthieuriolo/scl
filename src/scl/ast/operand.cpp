#include "scl/ast/operand.hpp"

#include <string>
#include <iostream>
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
				case AND:
					return left->compute(ctx)->operator_and(ctx, right->compute(ctx));
				case OR:
					return left->compute(ctx)->operator_or(ctx, right->compute(ctx));
			}

			throw new std::logic_error("invalid operand type");
		}

		void Operand::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.operand\n";
			std::cout << std::string((level+1)*2, ' ') << "operand: ";

			switch(this->operand) {
				case PLUS:
					std::cout << "PLUS";
					break;
				case MINUS:
					std::cout << "MINUS";
					break;
				case ASTERISK:
					std::cout << "ASTERISK";
					break;
				case SLASH:
					std::cout << "SLASH";
					break;
				case CARET:
					std::cout << "CARET";
					break;
				case AND:
					std::cout << "AND";
					break;
				case OR:
					std::cout << "OR";
					break;
			}

			std::cout << "\n";

			std::cout << std::string((level+1) * 2, ' ') << "left:\n";
			left->printAST(level+2);
			std::cout << std::string((level+1) * 2, ' ') << "right:\n";
			right->printAST(level+2);
		}
	}
}