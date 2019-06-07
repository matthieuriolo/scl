#include "scl/types/iteratorstring.hpp"

namespace SCL {
	namespace Types {
		IteratorString::IteratorString(SCL::Types::String *string) {
			this->string = string;
			iter = string->getValue().cbegin();
		}

		SCL::Type *IteratorString::next() {
			if(iter == string->getValue().cend()) {
				return NULL;
			}

			SCL::Type *ret = new SCL::Types::String(*iter);
			iter++;
			return ret;
		}
	}
}