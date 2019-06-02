#ifndef __SCL_TYPES_UNDEFINED__
#define __SCL_TYPES_UNDEFINED__

#include "scl/type.hpp"

namespace SCL {
	namespace Types {
		class Undefined : public Type {
			private:
				Undefined();
			public:
				static Undefined *getUndefined();
				std::string getName();
				static std::string getTypeName();
				std::string stringify(SCL::Context *ctx);
				int compare(SCL::Context *ctx, Type *right);
		};
	}
}

#endif