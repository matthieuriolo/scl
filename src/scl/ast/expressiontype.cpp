#include "scl/ast/expressiontype.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		ExpressionType::ExpressionType(SCL::Type* type) {
			this->type = type;
		}

		SCL::Type *ExpressionType::compute(SCL::Context *ctx) {
			return type;
		}

		void ExpressionType::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "expressiontype\n";
			std::cout << std::string((level+1)*2, ' ') << "type." << type->getName() << "\n";
			std::cout << std::string((level+2)*2, ' ') << type->stringify() << "\n";
		}
	}
}