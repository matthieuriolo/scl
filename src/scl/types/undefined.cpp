#include "scl/types/undefined.hpp"


namespace SCL {
	namespace Types {
		Undefined::Undefined() {}

		Undefined *Undefined::getUndefined() {
			static Undefined* intern = NULL;
			if(!intern) {
				intern = new Undefined();
			}

			return intern;
		}

		std::string Undefined::getTypeName() {
			return std::string("undefined");
		}

		std::string Undefined::getName() {
			return Undefined::getTypeName();
		}


		std::string Undefined::stringify(Context *ctx) {
			return this->getName();
		}

		int Undefined::compare(Context *ctx, Type *right) {
			return SCL::Type::comparison(this, right);
		}
		
		Type *Undefined::operator_plus(Context *ctx, Type *right) {
			return NULL;
		}

		Type *Undefined::operator_minus(Context *ctx, Type *right) {
			return NULL;
		}
		
		Type *Undefined::operator_asterisk(Context *ctx, Type *right) {
			return NULL;
		}
		
		Type *Undefined::operator_slash(Context *ctx, Type *right) {
			return NULL;
		}

		Type *Undefined::operator_caret(Context *ctx, Type *right) {
			return NULL;
		}
	}
}