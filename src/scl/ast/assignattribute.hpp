#ifndef __SCL_AST_ASSIGNATTRIBUTE__
#define __SCL_AST_ASSIGNATTRIBUTE__

#include "scl/ast/instruction.hpp"
#include "scl/ast/variable.hpp"

namespace SCL {
	namespace AST {
		class AssignAttribute : public Instruction {
			private:
				SCL::AST::Expression *expression;
				SCL::AST::Expression *key;

				SCL::AST::Expression *value;
				
			public:
				AssignAttribute(SCL::AST::Expression *expression, SCL::AST::Expression *key, SCL::AST::Expression *value);

				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif