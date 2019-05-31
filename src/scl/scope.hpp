#ifndef __SCL_SCOPE__
#define __SCL_SCOPE__

#include <string>
#include <map>
#include <list>
#include "scl/ast/instruction.hpp"

namespace SCL {
	class Type;
	namespace AST {
		class Variable;
	}
	
	class Scope {
		private:
			Scope* parent;
			std::map<std::string, SCL::Type *> variables;

		public:
			Scope();
			Scope(Scope* parent);
			
			//std::map<std::string, Function*> functions;
			std::list<SCL::AST::Instruction *> instructions;

			void setValue(std::string name, SCL::Type *);
			SCL::Type *getValue(std::string name);
			void setValue(SCL::AST::Variable *, SCL::Type *);
			SCL::Type *getValue(SCL::AST::Variable *);
	};
}

#endif