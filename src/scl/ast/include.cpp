#include "scl/ast/include.hpp"
#include "scl/context.hpp"

#include "scl/parserresult.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Include::Include(std::string path) {
			this->path = path;
		}

		void Include::execute(SCL::Context * ctx) {
			SCL::ParserResult res;
			if(res.parse(path) == 0) {
				res.module->execute(ctx);
			}else {
				throw new std::logic_error("file '" + path + "' not found");
			}
		}

		void Include::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.include\n";
			std::cout << std::string((level+1)*2, ' ') << "path: " << path << "\n";
		}
	}
}