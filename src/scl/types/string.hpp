#ifndef __SCL_TYPES_STRING__
#define __SCL_TYPES_STRING__

#include <string>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class String : public Type {
			private:
				std::string value;
			public:
				String();
				String(std::string value);

				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				SCL::Types::Boolean *toBoolean();
				int compare(Type *right);

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
		};
	}
}

#endif