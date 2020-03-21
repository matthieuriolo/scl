#include "scl/ast/instruction.hpp"


#include <iostream>
#include <string>


namespace SCL {
	namespace AST {
		void Instruction::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "unknown instruction type\n";
		}
	}
}