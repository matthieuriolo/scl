#ifndef __SCL_AST_COMMANDS_ARGUMENT__
#define __SCL_AST_COMMANDS_ARGUMENT__

#include <list>
#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		namespace Commands {
			class Argument {
				private:
					std::list<SCL::AST::Expression*> expressions;
					
				public:
					Argument();
					
					void addExpression(SCL::AST::Expression* expression);

					void printAST(int level);

					std::string stringify(SCL::Context *ctx);
					//std::string getoptify(SCL::Context *ctx, SCL::Types::Dictionary * dict);
			};
		}
	}
}

#endif