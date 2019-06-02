#ifndef __SCL_TYPES_ARRAY__
#define __SCL_TYPES_ARRAY__

#include <vector>
#include "scl/type.hpp"

namespace SCL {
	namespace Types {
		class Array : public Type {
			private:
				std::vector<SCL::AST::Expression *> values;
			public:
				Array();

				void add(SCL::AST::Expression* value);

				std::string getName();
				static std::string getTypeName();
				std::string stringify(Context *ctx);
				int compare(SCL::Context *ctx, Type *right);

				Type *operator_plus(Context *ctx, Type *right);
				Type *operator_asterisk(Context *ctx, Type *right);
		};
	}
}

#endif