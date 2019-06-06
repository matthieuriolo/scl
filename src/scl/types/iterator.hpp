#ifndef __SCL_TYPES_ITERATOR__
#define __SCL_TYPES_ITERATOR__

#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class Iterator : public Type {
			public:
				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				int compare(Type *right);
				SCL::Types::Boolean *toBoolean();
				
				virtual SCL::Type *next() = 0;
		};
	}
}

#endif