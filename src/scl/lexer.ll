
%{
#include "scl/ast/operand.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"
#include "scl/parserresult.hpp"
#include "scl/parser.hh"

using namespace SCL;
%}

%option noyywrap nounput noinput batch debug


%{
#define YY_USER_ACTION  loc.columns(yyleng);
%}
%%

%{
SCL::location& loc = result.location;
loc.step();	
%}

%{
/* operands */
%}

"print"               return Parser::make_PRINTTOKEN(loc);
"="                   return Parser::make_OPERAND_EQUAL(loc);
"+"                   return Parser::make_OPERAND_PLUS(AST::PLUS, loc);
"-"                   return Parser::make_OPERAND_MINUS(AST::MINUS, loc);
"*"                   return Parser::make_OPERAND_ASTERISK(AST::ASTERISK, loc);
"/"                   return Parser::make_OPERAND_SLASH(AST::SLASH, loc);
"^"                   return Parser::make_OPERAND_CARET(AST::CARET, loc);

%{
/* types */
%}
[0-9]+                return Parser::make_INTEGER(new SCL::Types::Integer(yytext), loc);
[0-9]+\.[0-9]*        return Parser::make_FLOAT(new SCL::Types::Float(yytext), loc);

\$[a-zA-Z0-9]+        return Parser::make_VARIABLE(new SCL::AST::Variable(yytext + 1), loc);


\"(\\|[^\\"])*\"      return Parser::make_STRING(new SCL::AST::String(yytext), loc);
\'(\\|[^\\'])*\'      return Parser::make_STRING(new SCL::AST::String(yytext), loc);


%{
/* analyctics */
%}

[ \t\r]+              loc.step();
.                     {
						throw SCL::Parser::syntax_error
						(loc, "invalid character: " + std::string(yytext));
                      }
<<EOF>>               return Parser::make_END(loc);
%%




namespace SCL {
	void ParserResult::scan_begin() {
		yy_flex_debug = trace_scanning;
		if(file.empty() || file == "-") {
			yyin = stdin;
		}else if(!(yyin = fopen(file.c_str (), "r"))) {
			std::cerr << "cannot open " << file << ": " << strerror(errno) << '\n';
			exit(EXIT_FAILURE);
		}
	}

	void ParserResult::scan_end() {
		fclose(yyin);
	}
}
