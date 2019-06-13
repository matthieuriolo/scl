#include "scl/types/string.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/undefined.hpp"
#include "scl/types/iteratorstring.hpp"
#include <sstream>

namespace SCL {
	namespace Types {
		String::String() {
			value = "";
		}

		String::String(std::string value) {
			this->value = value;
		}

		String::String(char character) {
			value = std::string(1, character);
		}

		std::string& String::getValue() {
			return value;
		}

		std::string String::getTypeName() {
			return std::string("string");
		}

		std::string String::getName() {
			return String::getTypeName();
		}

		SCL::Type *String::getAccess(SCL::Type *key) {
			if(key->getName() == "integer") {
				long idx = ((SCL::Types::Integer *)key)->getValue();
				if(idx < 0 ) {
					idx = value.size() + idx;
				}

				if(idx >= 0 && idx < value.size()) {
					return new String(value[idx]);
				}
			}

			return Types::Undefined::getUndefined();
		}

		std::string String::stringify() {
			return value;
		}

		SCL::Types::Boolean *String::toBoolean() {
			return value.size() > 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
		}

		int String::compare(Type *right) {
			if(getName() != right->getName()) {
				return SCL::Type::comparison(this, right);
			}

			return value.compare(((String*)right)->value);
		}

		SCL::Types::Iterator *String::iterator() {
			return new SCL::Types::IteratorString(this);
		}
		
		Type *String::operator_plus(Context *ctx, Type *right) {
			if(right->getName() == String::getTypeName()) {
				return new String(value + ((String*)right)->value);
			}

			return Undefined::getUndefined();
		}

		Type *String::operator_asterisk(Context *ctx, Type *right) {
			if(right->getName() == "integer") {
				std::stringstream ss;
				for(long i = 0; i < ((Integer*) right)->getValue(); i++) {
					ss << value;
				}

				return new String(ss.str());
			}

			return Undefined::getUndefined();
		}
	}
}