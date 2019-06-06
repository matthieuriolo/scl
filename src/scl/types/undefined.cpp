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


		std::string Undefined::stringify() {
			return this->getName();
		}

		int Undefined::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}

		SCL::Types::Boolean *Undefined::toBoolean() {
			return SCL::Types::Boolean::getFalse();
		}
	}
}