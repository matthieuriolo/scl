#ifndef __SCL_AST_IMPORT__
#define __SCL_AST_IMPORT__

#include "scl/ast/instruction.hpp"
#include <string>

namespace SCL {
	namespace AST {
		class Import : public Instruction {
			private:
				std::string path;
			public:
				Import(std::string path);

				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif