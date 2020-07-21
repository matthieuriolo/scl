#ifndef __SCL_AST_COMMANDS_ARGUMENT__
#define __SCL_AST_COMMANDS_ARGUMENT__

#include <list>
#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		namespace Commands {
			class Argument : public SCL::AST::Expression {
				private:
					std::list<SCL::AST::Expression*> expressions;
					
				public:
					Argument();
					
					void addExpression(SCL::AST::Expression* expression);

					SCL::Type *compute(SCL::Context *ctx);
					void printAST(int level);
			};
		}
	}
}

#endif