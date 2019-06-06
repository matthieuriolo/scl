#ifndef __SCL_TYPES_BOOLEAN__
#define __SCL_TYPES_BOOLEAN__

#include "scl/type.hpp"

namespace SCL {
	namespace Types {
		class Boolean : public Type {
			private:
				Boolean();
			public:
				static Boolean *getFalse();
				static Boolean *getTrue();

				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				SCL::Types::Boolean *toBoolean();
				int compare(Type *right);

				Type *operator_and(SCL::Context *ctx, Type *right);
				Type *operator_or(SCL::Context *ctx, Type *right);
		};
	}
}

#endif