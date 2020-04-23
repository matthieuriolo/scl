#include "scl/types/iteratorinteger.hpp"
#include "scl/types/integer.hpp"

namespace SCL {
	namespace Types {
		IteratorInteger::IteratorInteger(long start, long end) {
			this->current = start;
			this->start = start;
			this->end = end;
			this->increment = getDefaultIncrement(start, end);
		}
		
		long IteratorInteger::getDefaultIncrement(long start, long end) {
			return start < end ? 1 : -1;
		}

		SCL::Type *IteratorInteger::next() {
			if(start < end ? current > end : current < end) {
				return NULL;
			}
			
			SCL::Type* ret = new SCL::Types::Integer(current);
			current += increment;
			return ret;
		}

		SCL::Types::Iterator *IteratorInteger::iterator() {
			return this;
		}
	}
}