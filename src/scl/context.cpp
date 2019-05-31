#include "scl/context.hpp"
#include <iostream>

namespace SCL {
	Context::Context(SCL::Scope *scope) {
		this->parent = NULL;
		this->scope = scope;
	}

	Context::Context(Context *parent, SCL::Scope *scope) {
		this->parent = parent;
		this->scope = scope;
	}

	SCL::Scope *Context::getScope() {
		return scope;
	}

	void Context::execute() {
		for(auto& instr : scope->instructions) {
			std::cout << "executing\n";
			instr->execute(this);
		}
	}
}