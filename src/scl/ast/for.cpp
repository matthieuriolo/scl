#include "scl/ast/for.hpp"


#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		For::For(SCL::AST::Variable *variable, SCL::AST::Expression *expression, SCL::Scope *scope) {
			this->variable = variable;
			this->expression = expression;
			this->scope = scope;
		}

		void For::execute(SCL::Context * ctx) {
			SCL::Types::Iterator *iter = expression->compute(ctx)->iterator();

			if(iter == NULL) {
				throw new std::logic_error("expression is not iterable");
			}

			SCL::Type *val;
			while((val = iter->next()) != NULL) {
				SCL::Context *newCtx = new SCL::Context(ctx);
				newCtx->setValue(variable, val);
				scope->execute(newCtx);
				delete(newCtx);
			}
		}

		void For::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.for\n";
			std::cout << std::string((level+1) * 2, ' ') << "variable:\n";
			variable->printAST(level+2);
			std::cout << std::string((level+1)*2, ' ') << "expression:\n";
			expression->printAST(level+2);
			std::cout << std::string((level+1)*2, ' ') << "scope:\n";
			scope->printAST(level+2);
		}
	}
}