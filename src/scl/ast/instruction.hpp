#ifndef __SCL_AST_INSTRUCTION__
#define __SCL_AST_INSTRUCTION__

namespace SCL {
	class Context;
	
	namespace AST {
		class Instruction {
			public:
				virtual void execute(SCL::Context * ctx) = 0;
		};
	}
}

#endif