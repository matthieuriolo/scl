#ifndef __SCL_TYPES_ITERATORINTEGER__
#define __SCL_TYPES_ITERATORINTEGER__

#include "scl/types/iterator.hpp"

namespace SCL {
	namespace Types {
		class IteratorInteger : public Iterator {
			private:
				long current;
				long start;
				long end;
				long increment;

				long getDefaultIncrement(long start, long end);

			public:
				IteratorInteger(long start, long end);
				SCL::Type *next();
				SCL::Types::Iterator *iterator();
		};
	}
}

#endif