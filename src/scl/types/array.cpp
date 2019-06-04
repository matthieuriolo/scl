#include "scl/types/array.hpp"
#include "scl/types/undefined.hpp"
#include <sstream>

namespace SCL {
	namespace Types {
		Array::Array() {}

		void Array::add(SCL::Type* value) {
			values.push_back(value);
		}

		std::string Array::getTypeName() {
			return std::string("array");
		}

		std::string Array::getName() {
			return Array::getTypeName();
		}


		std::string Array::stringify() {
			std::stringstream ss;
			ss << "[";

			std::vector<SCL::Type *>::iterator iter = values.begin();
			while(iter != values.end()) {
				ss << (*iter)->stringify();

				iter++;
				if(iter != values.end()) {
					ss << ", ";
				}
			}

			ss << "]";

			return ss.str();
		}

		int Array::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}
		
		Type *Array::operator_plus(Context *ctx, Type *right) {
			return Undefined::getUndefined();
		}

		Type *Array::operator_asterisk(Context *ctx, Type *right) {
			return Undefined::getUndefined();
		}
	}
}