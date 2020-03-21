#include "scl/ast/range.hpp"


#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Range::Range(SCL::AST::Expression *expression, SCL::AST::Expression *start, SCL::AST::Expression *end) {
			this->expression = expression;
			this->start = start;
			this->end = end;
		}

		SCL::Type *Range::compute(SCL::Context * ctx) {
			return expression->compute(ctx)->getRange(start ? start->compute(ctx) : NULL, end ? end->compute(ctx) : NULL);
		}

		void Range::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.range\n";
			std::cout << std::string((level+1) * 2, ' ') << "start:\n";
			start->printAST(level + 2);
			std::cout << std::string((level+1) * 2, ' ') << "end:\n";
			end->printAST(level + 2);
			std::cout << std::string((level+1) * 2, ' ') << "expression:\n";
			expression->printAST(level + 2);
		}
	}
}