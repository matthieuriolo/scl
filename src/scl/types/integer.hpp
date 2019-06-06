#ifndef __SCL_TYPES_INTEGER__
#define __SCL_TYPES_INTEGER__

#include <string>
#include "scl/type.hpp"
#include "scl/types/float.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class Integer : public Type {
			private:
				long value;
			public:
				Integer();
				Integer(long value);
				Integer(std::string value);

				SCL::Types::Boolean *toBoolean();
				Float *toFloat();
				long getValue();
				
				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				int compare(Type *right);

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_minus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
				Type *operator_slash(Context *ctx, Type *right);
				Type *operator_caret(Context *ctx, Type *right);
		};
	}
}

#endif