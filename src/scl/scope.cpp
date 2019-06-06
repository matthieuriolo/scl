#include "scl/scope.hpp"
#include "scl/context.hpp"

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
}