#ifndef __SCL_TYPES_INTEGER__
#define __SCL_TYPES_INTEGER__

#include <string>
#include "scl/type.hpp"
#include "scl/types/float.hpp"

namespace SCL {
	namespace Types {
		class Integer : public Type {
			private:
				long value;
			public:
				Integer();
				Integer(long value);
				Integer(std::string value);

				Float *toFloat();

				std::string getName();
				static std::string getTypeName();
				std::string stringify(Context *ctx);
				int compare(SCL::Context *ctx, Type *right);
				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_minus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
				Type *operator_slash(Context *ctx, Type *right);
				Type *operator_caret(Context *ctx, Type *right);
		};
	}
}

#endif