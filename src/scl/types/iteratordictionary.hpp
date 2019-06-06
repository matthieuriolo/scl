#ifndef __SCL_TYPES_ITERATORDICTIONARY__
#define __SCL_TYPES_ITERATORDICTIONARY__

#include <map>
#include "scl/types/iterator.hpp"
#include "scl/types/dictionary.hpp"

namespace SCL {
	namespace Types {
		class IteratorDictionary : public Iterator {
			private:
				SCL::Types::Dictionary *dictionary;
				std::map<SCL::Type *, SCL::Type *, DictionaryTypeCompar>::const_iterator iter;
			public:
				IteratorDictionary(SCL::Types::Dictionary *dictionary);
				SCL::Type *next();
		};
	}
}

#endif