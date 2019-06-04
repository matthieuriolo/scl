// /usr/local/opt/bison/share/doc/bison/examples/c++/calc++/driver.hh

%require "3.4"

%defines
%skeleton "lalr1.cc"
%define api.parser.class {Parser}
// %lex-param {example::ParseDriver* parser}
%define api.namespace {SCL}

%define api.token.constructor
%define api.value.type variant
%define parse.assert
%define parse.trace
%define parse.error verbose

%locations

%param { SCL::ParserResult& result }

%code requires {
	#include "scl/ast/array.hpp"
	#include "scl/ast/dictionary.hpp"

	#include "scl/ast/operand.hpp"
	#include "scl/ast/expressiontype.hpp"
	#include "scl/ast/instruction.hpp"
	#include "scl/ast/variable.hpp"
	#include "scl/ast/assign.hpp"
	#include "scl/ast/print.hpp"

	#include "scl/types/float.hpp"
	#include "scl/types/integer.hpp"
	#include "scl/types/boolean.hpp"
	
	#include <iostream>

	namespace SCL {
		class ParserResult;
	}
}

%code {
	#include "scl/parserresult.hpp"
}


%token OPERAND_EQUAL

%token <SCL::AST::Operand_Type> OPERAND_PLUS OPERAND_MINUS OPERAND_ASTERISK OPERAND_SLASH OPERAND_CARET
%left OPERAND_PLUS OPERAND_MINUS OPERAND_ASTERISK OPERAND_SLASH OPERAND_CARET

%token <SCL::AST::Operand_Type> OPERAND_AND OPERAND_OR
%left OPERAND_AND OPERAND_OR

%token SYMBOL_SQUARED_BRACKET_OPEN SYMBOL_SQUARED_BRACKET_CLOSE
%token SYMBOL_CURLY_BRACKET_OPEN SYMBOL_CURLY_BRACKET_CLOSE
%token SYMBOL_COLON SYMBOL_COMMA


// %type <instructions> MODULE INSTRUCTIONS
%type <SCL::AST::Instruction*> INSTRUCTION
%type <SCL::AST::Instruction*> ASSIGN
%type <SCL::AST::Instruction*> PRINT
%type <SCL::AST::Expression*> EXPRESSION
%type <SCL::AST::Array*> ARRAY ARRAY_ELEMENTS
%type <SCL::AST::Dictionary*> DICTIONARY DICTIONARY_ELEMENTS
%type <SCL::Type*> TYPE


%token <SCL::AST::Variable*> VARIABLE
%token <SCL::Type*> INTEGER FLOAT STRING BOOLEAN_FALSE BOOLEAN_TRUE
%token END 0

%token PRINTTOKEN "print"

%start MODULE

%printer { yyo << $$; } <*>;

%%


MODULE
	: INSTRUCTIONS
;

INSTRUCTIONS
	: %empty
	| INSTRUCTION { result.module.instructions.push_back($1); }
	| INSTRUCTIONS INSTRUCTION { result.module.instructions.push_back($2); }
;


INSTRUCTION
	: ASSIGN
	| PRINT
;

PRINT
	: PRINTTOKEN VARIABLE { $$ = new SCL::AST::Print($2); }
;

ASSIGN
	: VARIABLE OPERAND_EQUAL EXPRESSION { $$ = new SCL::AST::Assign($1, $3); }
;


EXPRESSION
	: TYPE { $$ = new SCL::AST::ExpressionType($1); }
	| VARIABLE { $$ = $1; }
	| ARRAY { $$ = $1; }
	| DICTIONARY { $$ = $1; }
	| EXPRESSION OPERAND_PLUS EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_MINUS EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_ASTERISK EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_SLASH EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_CARET EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_AND EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
	| EXPRESSION OPERAND_OR EXPRESSION { $$ = new SCL::AST::Operand($2, $1, $3); }
;

/* Types */
TYPE
	: INTEGER
	| FLOAT
	| STRING
	| BOOLEAN_TRUE
	| BOOLEAN_FALSE
;

ARRAY
	: SYMBOL_SQUARED_BRACKET_OPEN SYMBOL_SQUARED_BRACKET_CLOSE { $$ = new SCL::AST::Array(); }
	| SYMBOL_SQUARED_BRACKET_OPEN ARRAY_ELEMENTS SYMBOL_SQUARED_BRACKET_CLOSE { $$ = $2; }
;

ARRAY_ELEMENTS
	: EXPRESSION { $$ = new SCL::AST::Array(); $$->add($1); }
	| ARRAY_ELEMENTS SYMBOL_COMMA EXPRESSION { $1->add($3); $$ = $1; }
	| ARRAY_ELEMENTS SYMBOL_COMMA { $$ = $1; }
;

DICTIONARY
	: SYMBOL_CURLY_BRACKET_OPEN SYMBOL_CURLY_BRACKET_CLOSE { $$ = new SCL::AST::Dictionary(); }
	| SYMBOL_CURLY_BRACKET_OPEN DICTIONARY_ELEMENTS SYMBOL_CURLY_BRACKET_CLOSE { $$ = $2; }
;

DICTIONARY_ELEMENTS
	: EXPRESSION SYMBOL_COLON EXPRESSION { $$ = new SCL::AST::Dictionary(); $$->add($1, $3); }
	| DICTIONARY_ELEMENTS SYMBOL_COMMA EXPRESSION SYMBOL_COLON EXPRESSION { $1->add($3, $5); $$ = $1; }
	| DICTIONARY_ELEMENTS SYMBOL_COMMA { $$ = $1; }
;

%%

void SCL::Parser::error(const location_type& l, const std::string& m) {
	std::cerr << l << ": " << m << '\n';
}
