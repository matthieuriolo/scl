#include "scl/module.hpp"

#include <iostream>
#include <string>
#include <fstream>


#include "antlr4-runtime.h"
#include "scl/parser/ConformParser.h"
#include "scl/parser/ConformLexer.h"
#include "scl/ConformVisitor.hpp"

using namespace antlr4;

namespace SCL {
	Module::Module(SCL::Scope* scope) {
		this->scope = scope;
	}

	void Module::execute(SCL::Context* ctx) {
		scope->execute(ctx);
	}

	void Module::launch() {
		Context* ctx = new SCL::Context();
		execute(ctx);
		delete ctx;
	}

	void Module::printAST() {
		std::cout << "module\n";
		scope->printASTInstruction(1);
	}

	Module* Module::fromFile(std::string path) {
		return fromFile(false, path);
	}

	Module* Module::fromFile(bool showTrace, std::string path) {
		std::ifstream stream;
		stream.open(path);

		if(!stream.is_open()) {
			throw new std::logic_error("File '" + path + "' not found!");
		}

		ANTLRInputStream input(stream);
		ConformLexer lexer(&input);

		CommonTokenStream tokens(&lexer);
		ConformParser parser(&tokens);
		parser.setTrace(showTrace);

		if(showTrace) {
			std::cout << "File: " << path << "\n";
		}
		
		ConformParser::ModuleContext* tree = parser.module();
		SCL::ConformVisitor visitor;
		if(showTrace) {
			return NULL;
		}
		
		return visitor.visitModule(tree);
	}
}