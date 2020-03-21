#ifndef __SCL_AST_PRINT__
#define __SCL_AST_PRINT__

#include "scl/ast/instruction.hpp"
#include "scl/ast/variable.hpp"

namespace SCL {
	namespace AST {
		/* just for testing porpuses, will be removed afterwards */
		class Print : public Instruction {
			private:
				SCL::AST::Variable *variable;
				
			public:
				Print(SCL::AST::Variable *variable);
				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif