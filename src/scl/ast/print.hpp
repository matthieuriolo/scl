#ifndef __SCL_AST_PRINT__
#define __SCL_AST_PRINT__

#include "scl/ast/instruction.hpp"
#include "scl/ast/expression.hpp"

namespace SCL {
	namespace AST {
		/* just for testing porpuses, will be removed afterwards */
		class Print : public Instruction {
			private:
				SCL::AST::Expression *expression;
				
			public:
				Print(SCL::AST::Expression *expression);
				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif