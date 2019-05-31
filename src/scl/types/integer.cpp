#include "scl/types/integer.hpp"
#include "scl/types/undefined.hpp"
#include <cmath>

namespace SCL {
	namespace Types {
		Integer::Integer() {
			this->value = 0;
		}

		Integer::Integer(long value) {
			this->value = value;
		}

		Integer::Integer(std::string value) {
			this->value = std::stoi(value);
		}

		Float *Integer::toFloat() {
			return new Float(value);
		}

		std::string Integer::getTypeName() {
			return std::string("integer");
		}

		std::string Integer::getName() {
			return Integer::getTypeName();
		}


		std::string Integer::stringify(Context *ctx) {
			return std::to_string(value);
		}

		int Integer::compare(Context *ctx, Type *right) {
			if(this->getName() != right->getName()) {
				return SCL::Type::comparison(this, right);
			}

			return this->value - ((Integer*)right)->value;
		}
		
		Type *Integer::operator_plus(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				return new Integer(value + ((Integer*)right)->value);
			}else if(right->getName() == "float") {
				return toFloat()->operator_plus(ctx, right);
			}

			return Undefined::getUndefined();
		}

		Type *Integer::operator_minus(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				return new Integer(value - ((Integer*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Integer::operator_asterisk(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				return new Integer(value * ((Integer*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Integer::operator_slash(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				return new Integer(value / ((Integer*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Integer::operator_caret(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				return new Integer((long)std::pow(value, ((Integer*)right)->value));
			}

			return Undefined::getUndefined();
		}
	}
}