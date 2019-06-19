#ifndef __SCL_TYPES_ITERATORFLOAT__
#define __SCL_TYPES_ITERATORFLOAT__

#include "scl/types/iterator.hpp"

namespace SCL {
	namespace Types {
		class IteratorFloat : public Iterator {
			private:
				double current;
				double start;
				double end;
				double increment;
				
				double getDefaultIncrement(double start, double end);
				
			public:
				IteratorFloat(double start, double end);
				IteratorFloat(double start, double end, double increment);
				SCL::Type *next();
				SCL::Types::Iterator *iterator();
		};
	}
}

#endif