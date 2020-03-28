#ifndef __SCL_AST_INCLUDE__
#define __SCL_AST_INCLUDE__

#include "scl/ast/instruction.hpp"
#include <string>

namespace SCL {
	namespace AST {
		class Include : public Instruction {
			private:
				std::string path;
			public:
				Include(std::string path);

				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif