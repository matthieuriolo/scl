#include "scl/types/iteratordictionary.hpp"
#include <iostream>

namespace SCL {
	namespace Types {
		IteratorDictionary::IteratorDictionary(SCL::Types::Dictionary *dictionary) {
			this->dictionary = dictionary;
			iter = dictionary->getValues().cbegin();
		}

		SCL::Type *IteratorDictionary::next() {
			if(iter == dictionary->getValues().cend()) {
				return NULL;
			}

			SCL::Type *ret = iter->first;
			iter++;
			return ret;
		}
	}
}