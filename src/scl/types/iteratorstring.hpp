#ifndef __SCL_TYPES_ITERATORSTRING__
#define __SCL_TYPES_ITERATORSTRING__

#include <string>
#include "scl/types/iterator.hpp"
#include "scl/types/string.hpp"

namespace SCL {
	namespace Types {
		class IteratorString : public Iterator {
			private:
				SCL::Types::String *string;
				std::string::const_iterator iter;
			public:
				IteratorString(SCL::Types::String *string);
				SCL::Type *next();
		};
	}
}

#endif