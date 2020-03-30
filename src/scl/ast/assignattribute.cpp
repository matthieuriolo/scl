#include "scl/ast/assignattribute.hpp"

#include <string>
#include <iostream>

namespace SCL {
	namespace AST {
		AssignAttribute::AssignAttribute(SCL::AST::Expression *expression, SCL::AST::Expression *key, SCL::AST::Expression *value) {
			this->expression = expression;
			this->key = key;
			this->value = value;
		}

		void AssignAttribute::execute(SCL::Context * ctx) {
			expression->compute(ctx)->setAttribute(key->compute(ctx), value->compute(ctx));
		}

		void AssignAttribute::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "instruction.assignattribute\n";
			std::cout << std::string(level * 2, ' ') << " expression:\n";
			expression->printAST(level+1);
			std::cout << std::string(level * 2, ' ') << " key:\n";
			key->printAST(level+1);
			std::cout << std::string(level * 2, ' ') << " value:\n";
			value->printAST(level+1);
		}
	}
}