
%{
#include "scl/ast/operand.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"
#include "scl/types/string.hpp"
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


"print"               return Parser::make_PRINTTOKEN(loc);

				%{
				/* control structure 


				".."                  return Parser::make_OPERAND_RANGE(AST::RANGE, loc);

				*/	
				%}

%{
/* control structure */
%}

"if"                  return Parser::make_CONTROL_IF(loc);
"for"                 return Parser::make_CONTROL_FOR(loc);
"in"                  return Parser::make_CONTROL_IN(loc);
"end"                 return Parser::make_CONTROL_END(loc);               

%{
/* operands */
%}

"="                   return Parser::make_OPERAND_EQUAL(loc);
"+"                   return Parser::make_OPERAND_PLUS(AST::PLUS, loc);
"-"                   return Parser::make_OPERAND_MINUS(AST::MINUS, loc);
"*"                   return Parser::make_OPERAND_ASTERISK(AST::ASTERISK, loc);
"/"                   return Parser::make_OPERAND_SLASH(AST::SLASH, loc);
"^"                   return Parser::make_OPERAND_CARET(AST::CARET, loc);
"&&"                  return Parser::make_OPERAND_AND(AST::AND, loc);
"||"                  return Parser::make_OPERAND_OR(AST::OR, loc);

%{
/* symbols */
%}

"["                   return Parser::make_SYMBOL_SQUARED_BRACKET_OPEN(loc);
"]"                   return Parser::make_SYMBOL_SQUARED_BRACKET_CLOSE(loc);
"{"                   return Parser::make_SYMBOL_CURLY_BRACKET_OPEN(loc);
"}"                   return Parser::make_SYMBOL_CURLY_BRACKET_CLOSE(loc);
";"                   return Parser::make_SYMBOL_SEMICOLON(loc);
":"                   return Parser::make_SYMBOL_COLON(loc);
","                   return Parser::make_SYMBOL_COMMA(loc);
\n+                   {
						loc.lines(yyleng);
						loc.step();
						return Parser::make_SYMBOL_NEW_LINE(loc);
					   }

%{
/* comparators */
%}

"=="                   return Parser::make_COMPARATOR_EQUAL(AST::EQUAL, loc);
"!="                   return Parser::make_COMPARATOR_NOT_EQUAL(AST::NOT_EQUAL, loc);
"<"                    return Parser::make_COMPARATOR_LESS(AST::LESS, loc);
">"                    return Parser::make_COMPARATOR_GREATER(AST::GREATER, loc);
"<="                   return Parser::make_COMPARATOR_LESS_EQUAL(AST::LESS_EQUAL, loc);
">="                   return Parser::make_COMPARATOR_GREATER_EQUAL(AST::GREATER_EQUAL, loc);



%{
/* types */
%}

"TRUE"                return Parser::make_BOOLEAN_TRUE(Types::Boolean::getTrue(), loc);
"FALSE"               return Parser::make_BOOLEAN_FALSE(Types::Boolean::getFalse(), loc);

[0-9]+                return Parser::make_INTEGER(new Types::Integer(yytext), loc);
[0-9]+\.[0-9]*        return Parser::make_FLOAT(new Types::Float(yytext), loc);

\$[a-zA-Z0-9]+        return Parser::make_VARIABLE(new AST::Variable(yytext + 1), loc);


\"(\\|[^\\"])*\"    {
						auto s = std::string(yytext);
						return Parser::make_STRING(new Types::String(s.substr(1, s.size() - 2)), loc);
					}

\'(\\|[^\\'])*\'    {
						auto s = std::string(yytext);
						return Parser::make_STRING(new Types::String(s.substr(1, s.size() - 2)), loc);
					}

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
