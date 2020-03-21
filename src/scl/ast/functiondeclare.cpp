#include "scl/ast/functiondeclare.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		FunctionDeclare::FunctionDeclare(std::string name, SCL::Types::Function *function) {
			this->name = name;
			this->function = function;
		}

		void FunctionDeclare::execute(SCL::Context * ctx) {
			ctx->declareFunction(name, function);
		}

		void FunctionDeclare::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.FunctionDeclare\n";
			std::cout << std::string((level+1)*2, ' ') << "name:" << name << "\n";
			
			std::cout << std::string((level+1)*2, ' ') << "function:\n";
			function->printAST(level+2);
		}
	}
}