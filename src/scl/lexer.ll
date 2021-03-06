
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


%x COMMAND
%x FUNCTION

%%


%{
SCL::location& loc = result.location;
loc.step();	
%}


"print"               return Parser::make_PRINTTOKEN(loc);

include\ +([^\n]+)      {
					auto s = std::string(yytext);
					s = s.substr(7, s.size());
					auto wsfront=std::find_if_not(s.begin(),s.end(),[](int c){return std::isspace(c);});
					auto wsback=std::find_if_not(s.rbegin(),s.rend(),[](int c){return std::isspace(c);}).base();
					s = (wsback<=wsfront ? std::string() : std::string(wsfront,wsback));

					return Parser::make_INCLUDE(new AST::Include(s), loc);
				}

import\ +([^\n]+)      {
					auto s = std::string(yytext);
					s = s.substr(6, s.size());
					auto wsfront=std::find_if_not(s.begin(),s.end(),[](int c){return std::isspace(c);});
					auto wsback=std::find_if_not(s.rbegin(),s.rend(),[](int c){return std::isspace(c);}).base();
					s = (wsback<=wsfront ? std::string() : std::string(wsfront,wsback));
					
					return Parser::make_IMPORT(new AST::Import(s), loc);
				}

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

<INITIAL,FUNCTION>"=" return Parser::make_OPERAND_EQUAL(loc);
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

".."                  return Parser::make_SYMBOL_RANGE(loc);
"["                   return Parser::make_SYMBOL_SQUARED_BRACKET_OPEN(loc);
"]"                   return Parser::make_SYMBOL_SQUARED_BRACKET_CLOSE(loc);
"{"                   return Parser::make_SYMBOL_CURLY_BRACKET_OPEN(loc);
"}"                   return Parser::make_SYMBOL_CURLY_BRACKET_CLOSE(loc);
<INITIAL,FUNCTION>"("                   return Parser::make_SYMBOL_ROUND_BRACKET_OPEN(loc);
<INITIAL,FUNCTION>")"                   {
									BEGIN(INITIAL);
								return Parser::make_SYMBOL_ROUND_BRACKET_CLOSE(loc);
								}

<INITIAL,FUNCTION>":" return Parser::make_SYMBOL_COLON(loc);
<INITIAL,FUNCTION>","                   return Parser::make_SYMBOL_COMMA(loc);
<INITIAL,FUNCTION>"?"                   return Parser::make_SYMBOL_QUESTION_MARK(loc);
<INITIAL,FUNCTION>"!"                   return Parser::make_SYMBOL_EXCLAMATION_MARK(loc);


<INITIAL,COMMAND>";"  {
						BEGIN(INITIAL);
						loc.lines(yyleng);
						loc.step();
						return Parser::make_SYMBOL_SEMICOLON(loc);
					   }
<INITIAL,COMMAND>\n+  {
						BEGIN(INITIAL);
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

<INITIAL,FUNCTION>"TRUE"                return Parser::make_BOOLEAN_TRUE(Types::Boolean::getTrue(), loc);
<INITIAL,FUNCTION>"FALSE"               return Parser::make_BOOLEAN_FALSE(Types::Boolean::getFalse(), loc);

<INITIAL,FUNCTION>[0-9]+                return Parser::make_INTEGER(new Types::Integer(yytext), loc);
<INITIAL,FUNCTION>[0-9]+\.[0-9]+        return Parser::make_FLOAT(new Types::Float(yytext), loc);
<INITIAL,FUNCTION>\$[a-zA-Z0-9]+        return Parser::make_VARIABLE(new AST::Variable(yytext + 1), loc);

<INITIAL,FUNCTION>\"(\\|[^\\"])*\"    {
						auto s = std::string(yytext);
						return Parser::make_STRING(new Types::String(s.substr(1, s.size() - 2)), loc);
					}

<INITIAL,FUNCTION>\'(\\|[^\\'])*\'    {
						auto s = std::string(yytext);
						return Parser::make_STRING(new Types::String(s.substr(1, s.size() - 2)), loc);
					}

%{
/* command */
%}

("/"|"./"|"../"|[a-zA-Z]|_|-)+              {
											BEGIN(COMMAND);
											return Parser::make_COMMANDPATH(yytext, loc);
										}
<COMMAND>[^ \n#;]+                       return Parser::make_COMMANDARGUMENT(yytext, loc);

%{
/*
<COMMAND>-[a-zA-Z0-9]+
<COMMAND>--[^ =\n]+
*/
%}


:[a-zA-Z]+         {
						BEGIN(FUNCTION);
						return Parser::make_FUNCTION_NAME(std::string(yytext + 1), loc);
					}

<FUNCTION>[a-zA-Z0-9]+          return Parser::make_IDENTIFIER(std::string(yytext), loc);



%{
/* analyctics */
%}

<INITIAL,COMMAND>#[^\n]*

<INITIAL,FUNCTION,COMMAND>[ \t\r]+              loc.step();
<INITIAL,FUNCTION,COMMAND>.                     {
						throw SCL::Parser::syntax_error
						(loc, "invalid character: " + std::string(yytext));
                      }
<<EOF>>               return Parser::make_END(loc);


%%




namespace SCL {
	void ParserResult::scan_begin() {
		YY_FLUSH_BUFFER;
		BEGIN(INITIAL);
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
