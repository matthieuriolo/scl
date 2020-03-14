#include "scl/ast/functiondeclare.hpp"

namespace SCL {
	namespace AST {
		FunctionDeclare::FunctionDeclare(std::string name, SCL::Types::Function *function) {
			this->name = name;
			this->function = function;
		}

		void FunctionDeclare::execute(SCL::Context * ctx) {
			ctx->declareFunction(name, function);
		}
	}
}