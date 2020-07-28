#ifndef __SCL_TYPES_STRING__
#define __SCL_TYPES_STRING__

#include <string>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"
#include "scl/types/iterator.hpp"

namespace SCL {
	namespace Types {
		class String : public Type {
			private:
				std::string value;
			public:
				String();
				String(std::string value);
				String(char character);

				std::string& getValue();
				std::string getName();
				static std::string getTypeName();
				SCL::Type *getAccess(SCL::Type *key);
				SCL::Type *getRange(Type *start, Type *end);
				std::string stringify();
				std::string humanify();
				SCL::Types::Boolean *toBoolean();
				int compare(Type *right);
				
				SCL::Types::Iterator *iterator();

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
		};
	}
}

#endif