#include "scl/ast/if.hpp"
#include "scl/context.hpp"
#include "scl/types/boolean.hpp"


#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		If::If(SCL::AST::Expression *expression, SCL::Scope *scope) {
			this->expression = expression;
			this->scope = scope;
		}

		void If::execute(SCL::Context * ctx) {
			SCL::Type *type = expression->compute(ctx);

			if(type->toBoolean() == SCL::Types::Boolean::getFalse()) {
				return;
			}

			SCL::Context *newCtx = new SCL::Context(ctx);
			scope->execute(newCtx);
			delete(newCtx);
		}

		void If::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.if\n";
			std::cout << std::string((level+1)*2, ' ') << "expression:\n";
			expression->printAST(level+2);
			std::cout << std::string((level+1)*2, ' ') << "scope:\n";
			scope->printAST(level+2);
		}
	}
}