#ifndef __SCL_AST_FORVALUE__
#define __SCL_AST_FORVALUE__

#include "scl/ast/instruction.hpp"
#include "scl/ast/variable.hpp"
#include "scl/types/iterator.hpp"

namespace SCL {
	namespace AST {
		class ForValue : public Instruction {
			private:
				SCL::AST::Variable *variable;
				SCL::AST::Expression *expression;
				SCL::Scope *scope;
			public:
				ForValue(SCL::AST::Variable *variable, SCL::AST::Expression *expression, SCL::Scope *scope);

				void execute(SCL::Context * ctx);
		};
	}
}

#endif