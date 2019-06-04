#include "scl/type.hpp"
#include "scl/types/undefined.hpp"
#include <iostream>

namespace SCL {
	int Type::comparison(Type *left, Type *right) {
		std::string types[] = {
			"undefined",
			"boolean",
			"integer",
			"float",
			"string",
			"array",
			"dictionary"
		};

		return
			std::find(std::begin(types), std::end(types), left->getName())
			-
			std::find(std::begin(types), std::end(types), right->getName());
	}



	Type *Type::operator_plus(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_minus(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_asterisk(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_slash(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_caret(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_and(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}

	Type *Type::operator_or(SCL::Context *ctx, Type *right) {
		return Types::Undefined::getUndefined();
	}
}