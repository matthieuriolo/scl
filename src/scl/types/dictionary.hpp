#ifndef __SCL_TYPES_DICTIONARY__
#define __SCL_TYPES_DICTIONARY__

#include <map>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class DictionaryTypeCompar {
			public:
				bool operator() (const Type* left, const Type* right) const {
					return ((Type*)left)->compare((Type *)right) < 0;
				}
		};

		

		class Dictionary : public Type {
			private:
				std::map<SCL::Type *, SCL::Type *, DictionaryTypeCompar> values;
			public:
				static std::string getTypeName();
				Dictionary();
				void add(SCL::Type* key, SCL::Type* value);

				SCL::Types::Boolean *toBoolean();
				std::string getName();
				std::string stringify();
				int compare(Type *right) ;
		};
	}
}

#endif