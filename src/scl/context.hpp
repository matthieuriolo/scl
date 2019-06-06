#ifndef __SCL_CONTEXT__
#define __SCL_CONTEXT__

#include <map>
#include <string>
#include "scl/scope.hpp"
#include "scl/type.hpp"

namespace SCL {
	class Type;
	namespace AST {
		class Variable;
	}
	
	class Context {
		private:
			Context* parent;
			//SCL::Scope* scope;
			
			std::map<std::string, SCL::Type *> variables;
		public:
			Context();
			Context(Context* parent);
			//Context(SCL::Scope* scope);
			//Context(Context* parent, SCL::Scope* scope);
			
			void setValue(std::string name, SCL::Type *);
			SCL::Type *getValue(std::string name);
			void setValue(SCL::AST::Variable *, SCL::Type *);
			SCL::Type *getValue(SCL::AST::Variable *);
	};
}

#endif