#include "scl/module.hpp"
#include "scl/context.hpp"

#include <iostream>
#include <string>

namespace SCL {
	void Module::launch() {
		//Context *ctx = new Context(this);
		Context *ctx = new Context();
		execute(ctx);
		delete ctx;
	}

	void Module::printASTTree() {
		Scope::printAST(0);
	}

	void Module::printAST(int level) {
		std::cout << std::string(level, ' ') << "module\n";
		printASTInstruction(level);
	}
}