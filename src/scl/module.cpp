#include "scl/module.hpp"
#include "scl/context.hpp"

#include <iostream>
#include <string>

namespace SCL {
	Module::Module(SCL::Scope* scope) {
		this->scope = scope;
	}

	void Module::launch() {
		//Context *ctx = new Context(this);
		Context *ctx = new Context();
		scope->execute(ctx);
		delete ctx;
	}

	void Module::printAST() {
		std::cout << "module\n";
		scope->printASTInstruction(1);
	}
}