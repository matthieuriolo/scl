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


				Type *operator_plus(SCL::Context *ctx, Type *right);
				Type *operator_minus(SCL::Context *ctx, Type *right);
				Type *operator_asterisk(SCL::Context *ctx, Type *right);
				Type *operator_slash(SCL::Context *ctx, Type *right);
				Type *operator_caret(SCL::Context *ctx, Type *right);
		};
	}
}

#endif