#include "scl/module.hpp"

#include <iostream>
#include <string>
#include <regex>
#include <list>

#include "antlr4-runtime.h"
#include "scl/parser/ConformParser.h"
#include "scl/parser/ConformLexer.h"
#include "scl/ConformVisitor.hpp"
#include "scl/ast/instruction.hpp"

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

		if(showTrace) {
			std::cout << "File: " << path << "\n";
		}

		buildScope(showTrace, &stream);

return NULL;
/*
		ANTLRInputStream input(stream);
		ConformLexer lexer(&input);

		CommonTokenStream tokens(&lexer);
		ConformParser parser(&tokens);
		parser.setTrace(showTrace);
		parser.removeErrorListeners();
		//parser.addErrorListener(ANTLRErrorListener);

		if(showTrace) {
			std::cout << "File: " << path << "\n";
		}
		
		ConformParser::ModuleContext* tree = parser.module();
		SCL::ConformVisitor visitor;
		if(showTrace) {
			return NULL;
		}
		
		return visitor.visitModule(tree);*/
	}

	SCL::Scope* Module::buildScope(bool showTrace, std::ifstream* stream) {
		auto exprConformUnnested = std::regex("^\\s*(\\$|:).*");
		auto exprConformNested = std::regex("^\\s*(for|if)\\s+.*",
				std::regex_constants::icase);

		std::string line;
		std::list<SCL::AST::Instruction *> instructions;

		while (std::getline(*stream, line)) {
			ANTLRInputStream input(line);

			if(std::regex_match(line, exprConformUnnested)) {
				//Conform Parser
				ANTLRInputStream input(line);
				ConformLexer lexer(&input);

				CommonTokenStream tokens(&lexer);
				ConformParser parser(&tokens);
				parser.setTrace(showTrace);
				parser.removeErrorListeners();
				//parser.addErrorListener(ANTLRErrorListener);
				
				ConformParser::InstructionContext* instr = parser.instruction();
				SCL::ConformVisitor visitor;
				
				instructions.push_back(visitor.visitInstruction(instr));
			} else if(std::regex_match(line, exprConformNested)) {
				//Command Parser
			}
		}

		return new SCL::Scope(instructions);
	}
}