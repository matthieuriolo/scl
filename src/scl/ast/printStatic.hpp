#ifndef __SCL_AST_PRINTSTATIC__
#define __SCL_AST_PRINTSTATIC__

#include "scl/ast/instruction.hpp"
#include "scl/type.hpp"

namespace SCL {
	namespace AST {
		/* just for testing porpuses, will be removed afterwards */
		class PrintStatic : public Instruction {
			private:
				SCL::Type *type;
				
			public:
				PrintStatic(SCL::Type *type);
				void execute(SCL::Context * ctx);
		};
	}
}

#endif