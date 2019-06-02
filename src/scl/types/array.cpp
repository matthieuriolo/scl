#include "scl/types/array.hpp"

namespace SCL {
	namespace Types {
		Array::Array() {}

		void Array::add(SCL::AST::Expression* value) {
			values.append(value);
		}

		std::string Array::getTypeName() {
			return std::string("array");
		}

		std::string Array::getName() {
			return Array::getTypeName();
		}


		std::string Array::stringify(Context *ctx) {
			return Undefined::getUndefined();
		}

		int Array::compare(Context *ctx, Type *right) {
			return Undefined::getUndefined();
		}
		
		Type *Array::operator_plus(Context *ctx, Type *right) {
			return Undefined::getUndefined();
		}

		Type *Array::operator_asterisk(Context *ctx, Type *right) {
			return Undefined::getUndefined();
		}
	}
}