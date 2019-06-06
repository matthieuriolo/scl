#ifndef __SCL_TYPES_ARRAY__
#define __SCL_TYPES_ARRAY__

#include <vector>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"
#include "scl/types/iterator.hpp"

namespace SCL {
	namespace Types {
		class Array : public Type {
			private:
				std::vector<SCL::Type *> values;
			public:
				Array();

				void add(SCL::Type* value);
				std::vector<SCL::Type *>& getValues();

				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				int compare(Type *right);
				SCL::Types::Boolean *toBoolean();
				SCL::Types::Iterator *iterator();

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
		};
	}
}

#endif