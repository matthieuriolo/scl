#include "scl/ast/unaryminus.hpp"

#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		UnaryMinus::UnaryMinus(SCL::AST::Expression *expression) {
			this->expression = expression;
		}

		SCL::Type *UnaryMinus::compute(SCL::Context *ctx) {
			SCL::Type *type = expression->compute(ctx);
			if(type->getName() == "integer") {
				return new SCL::Types::Integer(-((SCL::Types::Integer*)type)->getValue());
			}else if(type->getName() == "float") {
				return new SCL::Types::Float(-((SCL::Types::Float*)type)->getValue());
			}

			throw new std::logic_error("invalid unary type");
		}

		void UnaryMinus::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.unaryMinus\n";
			std::cout << std::string((level + 1) * 2, ' ') << "expression:\n";
			expression->printAST(level + 2);
		}
	}
}