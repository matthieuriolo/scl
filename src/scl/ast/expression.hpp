#ifndef __SCL_AST_EXPRESSION__
#define __SCL_AST_EXPRESSION__


#include "scl/type.hpp"

namespace SCL {
	namespace AST {
		class Expression {
			public:
				virtual SCL::Type *compute(SCL::Context *ctx) = 0;
		};
	}
}

#endif