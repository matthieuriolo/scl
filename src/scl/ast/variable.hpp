#ifndef __SCL_AST_VARIABLE__
#define __SCL_AST_VARIABLE__

#include <string>
#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class Variable : public Expression {
			private:
				std::string name;
			public:
				Variable(std::string name);
				std::string getName();
				SCL::Type *compute(SCL::Context *ctx);
				void printAST(int level);
		};
	}
}

#endif