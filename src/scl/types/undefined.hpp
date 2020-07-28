#ifndef __SCL_TYPES_UNDEFINED__
#define __SCL_TYPES_UNDEFINED__

#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class Undefined : public Type {
			private:
				Undefined();
			public:
				static Undefined *getUndefined();
				std::string getName();
				static std::string getTypeName();
				std::string humanify();
				SCL::Types::Boolean *toBoolean();

				int compare(Type *right);
		};
	}
}

#endif