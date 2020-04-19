#include <iostream>
#include <string.h>
#include <fstream>


#include "antlr4-runtime.h"
#include "scl/parser/sclParser.h"
#include "scl/parser/sclLexer.h"
#include "scl/ASTVisitor.hpp"
#include "scl/module.hpp"

using namespace antlr4;

void help() {
	std::cout << "SCL - System Control Language\n";
	std::cout << "subcommands:\n";
	std::cout << "  help     shows this help text\n";
	std::cout << "  run      executes the given scl files\n";
	std::cout << "  ast      displays the ast of the given scl files\n";
	std::cout << "  parse    displays the parser trace given scl files\n";
}

int main(int argc, char **argv) {
	if(argc < 2) {
		help();
		return 0;
	}

	if(strcasecmp(argv[1], "help") == 0) {
		help();
		return 0;
	}else {
		bool displayAST = false;
		bool displayTrace = false;
		
		if(strcasecmp(argv[1], "ast") == 0) {
			displayAST = true;
		}else if(strcasecmp(argv[1], "parse") == 0) {
			displayTrace = true;
		}else if(strcasecmp(argv[1], "run") != 0) {
			std::cout << "Unknown command '" << argv[1] << "'\n";
			help();
			return 1;
		}
		
		for(int i = 2; i < argc; i++) {
			try {
				std::ifstream stream;
				stream.open(argv[i]);

				ANTLRInputStream input(stream);
				sclLexer lexer(&input);

				CommonTokenStream tokens(&lexer);
				sclParser parser(&tokens);
				parser.setTrace(displayTrace);
				if(displayTrace) {
					std::cout << "File: " << argv[i] << "\n";
				}
				
				sclParser::ModuleContext* tree = parser.module();
				if(!displayTrace) {
					SCL::ASTVisitor visitor;
					SCL::Module* module = visitor.visitModule(tree);
					if(displayAST) {
						std::cout << "File: " << argv[i] << "\n";
						module->printAST();
					}else {
						module->launch();
					}
				}
			}catch(const std::exception* e) {
				std::cout << "Standard exception: " << e->what() << std::endl;
			}
		}
	}

	return 0;
}