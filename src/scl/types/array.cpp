#include "scl/types/array.hpp"
#include "scl/types/undefined.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/iteratorarray.hpp"
#include <sstream>

namespace SCL {
	namespace Types {
		Array::Array() {}

		Array::Array(std::vector<SCL::Type *> values) {
			this->values = values;
		}

		void Array::add(SCL::Type* value) {
			values.push_back(value);
		}

		std::string Array::getTypeName() {
			return std::string("array");
		}

		std::string Array::getName() {
			return Array::getTypeName();
		}

		std::vector<SCL::Type *>& Array::getValues() {
			return values;
		}


		SCL::Type *Array::getAccess(SCL::Type *key) {
			if(key->getName() == "integer") {
				long index = SCL::Type::getIndexFromNegative(((SCL::Types::Integer *)key)->getValue(), values.size());
				
				if(index >= 0 && index < values.size()) {
					return values[index];
				}
			}

			return Types::Undefined::getUndefined();
		}

		SCL::Type *Array::getRange(Type *start, Type *end) {
			long sIndex = 0;

			if(start != NULL) {
				sIndex = SCL::Type::getIndexFromNegative(((SCL::Types::Integer *)start)->getValue(), values.size());
			}

			long eIndex = 0;
			if(end != NULL) {
				eIndex = SCL::Type::getIndexFromNegative(((SCL::Types::Integer *)end)->getValue(), values.size());
			}

			if(sIndex >= 0 && eIndex >= 0 && sIndex < values.size() && eIndex < values.size()) {
				if(sIndex < eIndex) {
					return new Array(std::vector<SCL::Type *>(values.begin() + sIndex, values.begin() + eIndex));
				}

				return new Array();
			}

			return Types::Undefined::getUndefined();
		}

		void Array::setAttribute(Type *key, Type *value) {
			if(key->getName() == "integer") {
				long index = SCL::Type::getIndexFromNegative(((SCL::Types::Integer *)key)->getValue(), values.size());
				
				if(index >= 0 && index < values.size()) {
					values[index] = value;
					return;
				}else {
					throw new std::logic_error("key is out of range");
				}
			}

			throw new std::logic_error("key has the wrong type");
		}

		std::string Array::humanify() {
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
		
		SCL::Types::Iterator *Array::iterator() {
			return new SCL::Types::IteratorArray(this);
		}

		SCL::Types::Boolean *Array::toBoolean() {
			return values.size() > 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
		}

		int Array::compare(Type *right) {
			if(right->getName() == "array") {
				SCL::Types::Array* arr = (SCL::Types::Array*)right;

				if(values.size() != arr->values.size()) {
					return values.size() - arr->values.size();
				}

				for(size_t idx = 0; idx < values.size(); idx++) {
					int ret = values[idx]->compare(arr->values[idx]);
					if(ret != 0) {
						return ret;
					}
				}
			}
			
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