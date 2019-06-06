#ifndef __SCL_TYPES_ARRAY__
#define __SCL_TYPES_ARRAY__

#include <vector>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class Array : public Type {
			private:
				std::vector<SCL::Type *> values;
			public:
				Array();

				void add(SCL::Type* value);

				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				int compare(Type *right);
				SCL::Types::Boolean *toBoolean();

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
		};
	}
}

#endif