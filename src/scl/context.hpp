#ifndef __SCL_CONTEXT__
#define __SCL_CONTEXT__


#include "scl/scope.hpp"

namespace SCL {
	class Context {
		private:
			Context* parent;
			SCL::Scope* scope;
			//std::list<SCL::AST::Instruction *>::iterator currentInstruction;
		public:
			Context(SCL::Scope* scope);
			Context(Context* parent, SCL::Scope* scope);
			SCL::Scope* getScope();
			void execute(); 
	};
}

#endif