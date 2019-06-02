#include "scl/types/boolean.hpp"
#include "scl/types/undefined.hpp"

namespace SCL {
	namespace Types {
		Boolean::Boolean() {}

		Boolean *Boolean::getFalse() {
			static Boolean *boolean = NULL;
			if(boolean == NULL) {
				boolean = new Boolean();
			}
			return boolean;
		}

		Boolean *Boolean::getTrue() {
			static Boolean *boolean = NULL;
			if(boolean == NULL) {
				boolean = new Boolean();
			}
			return boolean;
		}

		std::string Boolean::getTypeName() {
			return std::string("boolean");
		}

		std::string Boolean::getName() {
			return Boolean::getTypeName();
		}


		std::string Boolean::stringify(Context *ctx) {
			return this == getTrue() ? "true" : "false";
		}

		int Boolean::compare(Context *ctx, Type *right) {
			if(right->getName() != "boolean") {
				return SCL::Type::comparison(this, right);
			}

			return this == right ? 0 : (this == Boolean::getTrue() ? -1 : 1);
		}

		Type *Boolean::operator_and(SCL::Context *ctx, Type *right) {
			if(right->getName() != "boolean") {
				return Undefined::getUndefined();
			}

			return this == Boolean::getTrue() && right == Boolean::getTrue() ? this : Boolean::getFalse();
		}

		Type *Boolean::operator_or(SCL::Context *ctx, Type *right) {
			if(right->getName() != "boolean") {
				return Undefined::getUndefined();
			}

			return this == Boolean::getTrue() || right == Boolean::getTrue() ? this : Boolean::getFalse();
		}
	}
}