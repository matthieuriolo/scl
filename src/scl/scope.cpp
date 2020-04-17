#include "scl/scope.hpp"
#include "scl/context.hpp"

#include <iostream>
#include <string>
namespace SCL {
	Scope::Scope() {}

	Scope::Scope(std::list<SCL::AST::Instruction *> instructions) {
		this->instructions = instructions;
	}



	void Scope::execute(Context * ctx) {
		for(auto& instr : instructions) {
			instr->execute(ctx);
		}
	}

	void Scope::printAST(int level) {
		std::cout << std::string(level*2, ' ') << "scope\n";
		printASTInstruction(level);
	}

	void Scope::printASTInstruction(int level) {
		for(auto& instr : instructions) {
			instr->printAST(level + 1);
		}
	}

	Scope::~Scope() {}
}