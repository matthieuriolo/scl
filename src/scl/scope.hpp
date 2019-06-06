#ifndef __SCL_SCOPE__
#define __SCL_SCOPE__

#include <list>
#include "scl/ast/instruction.hpp"

namespace SCL {
	class Context;
	class Scope {
		private:
			std::list<SCL::AST::Instruction *> instructions;
		public:
			Scope();
			Scope(std::list<SCL::AST::Instruction *> instructions);

			virtual void execute(Context * ctx);
	};
}

#endif