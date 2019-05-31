#ifndef __SCL_AST_ASSIGN__
#define __SCL_AST_ASSIGN__

#include "scl/ast/instruction.hpp"
#include "scl/ast/variable.hpp"

namespace SCL {
	namespace AST {
		class Assign : public Instruction {
			private:
				SCL::AST::Variable *variable;
				SCL::AST::Expression *expression;
				
			public:
				Assign(SCL::AST::Variable *variable, SCL::AST::Expression *expression);

				void execute(SCL::Context * ctx);
		};
	}
}

#endif