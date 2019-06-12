#include "scl/ast/unaryminus.hpp"

#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"

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
	}
}