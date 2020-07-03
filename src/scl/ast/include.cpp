#include "scl/ast/include.hpp"
#include "scl/context.hpp"
#include "scl/module.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Include::Include(std::string path) {
			this->path = path;
		}

		void Include::execute(SCL::Context * ctx) {
			SCL::Module* module = SCL::Module::fromFile(path);
			module->execute(ctx);
		}

		void Include::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.include\n";
			std::cout << std::string((level+1)*2, ' ') << "path: " << path << "\n";
		}
	}
}