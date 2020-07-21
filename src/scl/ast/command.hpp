#ifndef __SCL_AST_COMMAND__
#define __SCL_AST_COMMAND__

#include <string>
#include <list>
#include "scl/ast/instruction.hpp"
#include "scl/ast/commands/argument.hpp"

namespace SCL {
	namespace AST {
		class Command : public SCL::AST::Instruction {
			private:
				std::string commandpath;
				std::list<SCL::AST::Commands::Argument*> arguments;
				
				bool isAbsolutePath();
				bool isRelativePath();
				bool isCommand();

				std::string* findCommand(std::string cmd);
				void executeCommand(SCL::Context * ctx);
				void executeProcess(std::string path, SCL::Context * ctx);
			public:
				Command(std::string commandpath);
				Command(std::string commandpath, std::list<SCL::AST::Commands::Argument*> arguments);
				
				void execute(SCL::Context * ctx);
				void printAST(int level);
		};
	}
}

#endif