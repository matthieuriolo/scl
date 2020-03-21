#ifndef __SCL_MODUL__
#define __SCL_MODUL__

#include <list>
#include "scl/ast/instruction.hpp"
#include "scl/scope.hpp"

namespace SCL {
	class Module : public SCL::Scope {
		
		public:
			Module() : Scope() {}
			Module(std::list<SCL::AST::Instruction *> instructions) : Scope(instructions) {}

			void launch();
			void printASTTree();
			void printAST(int level);
	};
}

#endif