#include "scl/ast/comparator.hpp"
#include "scl/types/boolean.hpp"


#include <string>
#include <iostream>
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

		void Comparator::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.comparator\n";
			std::cout << std::string((level+1)*2, ' ') << "operand: ";

			switch(this->operand) {
				case EQUAL:
					std::cout << "EQUAL";
					break;
				case NOT_EQUAL:
					std::cout << "NOT_EQUAL";
					break;
				case LESS:
					std::cout << "LESS";
					break;
				case GREATER:
					std::cout << "GREATER";
					break;
				case LESS_EQUAL:
					std::cout << "LESS_EQUAL";
					break;
				case GREATER_EQUAL:
					std::cout << "GREATER_EQUAL";
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