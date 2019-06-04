#include "scl/types/float.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/undefined.hpp"
#include <cmath>

namespace SCL {
	namespace Types {
		Float::Float() {
			value = 0.0;
		}

		Float::Float(double value) {
			this->value = value;
		}

		Float::Float(std::string value) {
			this->value = std::stold(value);
		}

		std::string Float::getTypeName() {
			return std::string("float");
		}

		std::string Float::getName() {
			return Float::getTypeName();
		}


		std::string Float::stringify() {
			return std::to_string(value);
		}

		int Float::compare(Type *right) {
			if(getName() != right->getName()) {
				return SCL::Type::comparison(this, right);
			}

			return value - ((Float*)right)->value;
		}
		
		Type *Float::operator_plus(Context *ctx, Type *right) {
			if(right->getName() == Float::getTypeName()) {
				return new Float(value + ((Float*)right)->value);
			}else if(right->getName() == "integer") {
				return operator_plus(ctx, ((Integer*)right)->toFloat());
			}

			return Undefined::getUndefined();
		}

		Type *Float::operator_minus(Context *ctx, Type *right) {
			if(right->getName() == Float::getTypeName()) {
				return new Float(value - ((Float*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Float::operator_asterisk(Context *ctx, Type *right) {
			if(right->getName() == Float::getTypeName()) {
				return new Float(value * ((Float*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Float::operator_slash(Context *ctx, Type *right) {
			if(right->getName() == Float::getTypeName()) {
				return new Float(value / ((Float*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *Float::operator_caret(Context *ctx, Type *right) {
			if(right->getName() == Float::getTypeName()) {
				return new Float(std::pow(value, ((Float*)right)->value));
			}

			return Undefined::getUndefined();
		}
	}
}