#ifndef __SCL_TYPES_ITERATORARRAY__
#define __SCL_TYPES_ITERATORARRAY__

#include <vector>
#include "scl/types/iterator.hpp"
#include "scl/types/array.hpp"

namespace SCL {
	namespace Types {
		class IteratorArray : public Iterator {
			private:
				SCL::Types::Array *array;
				std::vector<SCL::Type *>::const_iterator iter;

			public:
				IteratorArray(SCL::Types::Array *array);
				SCL::Type *next();
		};
	}
}

#endif