#include "scl/ast/access.hpp"


#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Access::Access(SCL::AST::Expression *expression, SCL::AST::Expression *key) {
			this->expression = expression;
			this->key = key;
		}

		SCL::Type *Access::compute(SCL::Context * ctx) {
			return expression->compute(ctx)->getAccess(key->compute(ctx));
		}

		void Access::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.access\n";
			
			std::cout << std::string((level+1) * 2, ' ') << "expression:\n";
			expression->printAST(level+2);
			std::cout << std::string((level+1) * 2, ' ') << "key:\n";
			key->printAST(level+2);
		}
	}
}