#ifndef __SCL_AST_IF__
#define __SCL_AST_IF__

#include "scl/ast/instruction.hpp"
#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		class If : public Instruction {
			private:
				SCL::AST::Expression *expression;
				SCL::Scope *scope;
			public:
				If(SCL::AST::Expression *expression, SCL::Scope *scope);

				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif