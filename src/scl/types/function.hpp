#ifndef __SCL_TYPES_FUNCTION__
#define __SCL_TYPES_FUNCTION__

#include <list>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"

namespace SCL {
	namespace Types {
		class Function : public SCL::Type {
			private:
				Function();
			public:
				std::string getName();
				static std::string getTypeName();
				std::string stringify();

				int compare(SCL::Type *right);

				void execute(SCL::Context *ctx, std::list<std::string> arguments);
		};
	}
}

#endif