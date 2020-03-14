#include "scl/ast/printStatic.hpp"
#include <iostream>

namespace SCL {
	namespace AST {
		PrintStatic::PrintStatic(SCL::Type *type) {
			this->type = type;
		}

		void PrintStatic::execute(SCL::Context * ctx) {
			std::cout << type->stringify() << "\n";
		}
	}
}