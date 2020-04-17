#include <iostream>
#include <string.h>
#include <fstream>


#include "antlr4-runtime.h"
#include "scl/parser/sclParser.h"
#include "scl/parser/sclLexer.h"
#include "scl/parser/sclBaseVisitor.h"

using namespace antlr4;

int main(int argc, char **argv) {
	bool displayAST = false;
	bool displayTrace = false;

	for(int i = 1; i < argc; i++) {
		if(strcasecmp(argv[i], "--ast") == 0) {
			displayAST = true;
			continue;
		}else if(strcasecmp(argv[i], "--trace") == 0) {
			displayAST = true;
			continue;
		}

		try {
			std::ifstream stream;
			stream.open(argv[i]);

			ANTLRInputStream input(stream);
			sclLexer lexer(&input);

			CommonTokenStream tokens(&lexer);
			sclParser parser(&tokens);
			parser.setTrace(displayTrace);

			sclParser::ModuleContext* tree = parser.module();
			sclBaseVisitor visitor;
			//SCL::Module Module = visitor.visitModule(tree);
		}catch(const std::exception* e) {
			std::cout << "Standard exception: " << e->what() << std::endl;
		}
	}
}