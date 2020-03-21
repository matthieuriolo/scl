#ifndef __SCL_AST_FUNCTIONDECLARE__
#define __SCL_AST_FUNCTIONDECLARE__

#include "scl/ast/instruction.hpp"
#include "scl/types/function.hpp"

namespace SCL {
	namespace AST {
		class FunctionDeclare : public Instruction {
			private:
				std::string name;
				SCL::Types::Function *function;
				
			public:
				FunctionDeclare(std::string name, SCL::Types::Function *function);

				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif