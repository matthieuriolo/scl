#ifndef __SCL_TYPES_FLOAT__
#define __SCL_TYPES_FLOAT__

#include <string>
#include "scl/type.hpp"

namespace SCL {
	namespace Types {
		class Float : public Type {
			private:
				double value;
			public:
				Float();
				Float(double value);
				Float(std::string value);

				double getValue();
				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				std::string humanify();
				SCL::Types::Boolean *toBoolean();
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