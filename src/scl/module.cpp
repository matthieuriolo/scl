#include "scl/module.hpp"

#include <iostream>
#include <string>
#include <fstream>


#include "antlr4-runtime.h"
#include "scl/parser/sclParser.h"
#include "scl/parser/sclLexer.h"
#include "scl/ASTVisitor.hpp"

using namespace antlr4;

namespace SCL {
	Module::Module(SCL::Scope* scope) {
		this->scope = scope;
	}

	void Module::execute(SCL::Context* parentCtx) {
		Context* ctx = new SCL::Context(parentCtx);
		scope->execute(ctx);
		delete ctx;
	}

	void Module::launch() {
		execute(NULL);
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
		sclLexer lexer(&input);

		CommonTokenStream tokens(&lexer);
		sclParser parser(&tokens);
		parser.setTrace(showTrace);

		if(showTrace) {
			std::cout << "File: " << path << "\n";
		}
		
		sclParser::ModuleContext* tree = parser.module();
		SCL::ASTVisitor visitor;
		if(showTrace) {
			return NULL;
		}
		
		return visitor.visitModule(tree);
	}
}