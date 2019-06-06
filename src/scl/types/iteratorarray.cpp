#include "scl/types/iteratorarray.hpp"

namespace SCL {
	namespace Types {
		IteratorArray::IteratorArray(SCL::Types::Array *array) {
			this->array = array;
			iter = array->getValues().cbegin();
		}

		SCL::Type *IteratorArray::next() {
			if(iter == array->getValues().cend()) {
				return NULL;
			}

			SCL::Type *ret = *iter;
			iter++;
			return ret;
		}
	}
}