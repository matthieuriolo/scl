#include "scl/types/iteratorfloat.hpp"
#include "scl/types/float.hpp"
#include <cmath>

namespace SCL {
	namespace Types {
		IteratorFloat::IteratorFloat(double start, double end) {
			this->current = start;
			this->start = start;
			this->end = end;
			this->increment = getDefaultIncrement(start, end);
		}

		IteratorFloat::IteratorFloat(double start, double end, double increment) {
			this->current = start;
			this->start = start;
			this->end = end;
			this->increment = increment;
		}

		double IteratorFloat::getDefaultIncrement(double start, double end) {
			/*
			possible case scenario for start/end 
			7 4 => 3
			4 7 => 3
			-4 -7 => -3
			-7 -4 => -3
			4 -7 => 11
			-7 4 => 11
			*/

			double diff;
			if((start < 0 && end > 0) || (start > 0 && end < 0)) {
				diff = fabs(start) + fabs(end);
			}else {
				diff = fabs(start - end);
			}

			double ret = 1.0;
			while(ret > diff) {
				ret = ret / 10.0;
			}

			return start < end ? ret : -ret;
		}

		SCL::Type *IteratorFloat::next() {
			if(start < end ? current > end : current < end) {
				return NULL;
			}
			
			SCL::Type* ret = new SCL::Types::Float(current);
			current += increment;
			return ret;
		}

		SCL::Types::Iterator *IteratorFloat::iterator() {
			return this;
		}
	}
}