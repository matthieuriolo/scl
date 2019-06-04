#include "scl/ast/comparator.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace AST {
		Comparator::Comparator(Comparator_Type operand, SCL::AST::Expression *left, SCL::AST::Expression *right) {
			this->operand = operand;
			this->left = left;
			this->right = right;
		}

		SCL::Type *Comparator::compute(SCL::Context *ctx) {
			SCL::Type* lft = left->compute(ctx);
			SCL::Type* rgt = right->compute(ctx);
			
			switch(this->operand) {
				case EQUAL:
					return lft->compare(rgt) == 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
				case NOT_EQUAL:
					return lft->compare(rgt) != 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
				case LESS:
					return lft->compare(rgt) < 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
				case GREATER:
					return lft->compare(rgt) > 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
				case LESS_EQUAL:
					return lft->compare(rgt) <= 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
				case GREATER_EQUAL:
					return lft->compare(rgt) >= 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
			}

			throw new std::logic_error("invalid comparator type");
		}
	}
}