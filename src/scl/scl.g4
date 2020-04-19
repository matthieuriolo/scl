grammar scl;

/* grammar */
module: content=scope EOF;
scope: (instructions +=instruction DELIMITER?)* ;


variable: '$' IDENTIFIER;



instruction
	: assign
	| print
/*	| INCLUDE
	| IMPORT
	| FUNCTION_DECLARATION
	| command */
	| CONTROL_IF expression DELIMITER scope DELIMITER CONTROL_END
	| CONTROL_FOR variable CONTROL_IN expression DELIMITER scope DELIMITER CONTROL_END
;


/*command
	: COMMANDPATH
	| COMMAND COMMANDARGUMENT
;

function_declaration
	: FUNCTION_NAME FUNCTION_BODIES CONTROL_END
;

FUNCTION_BODIES
	: FUNCTION_BODIES FUNCTION_SIGNATUR INSTRUCTIONS
	| FUNCTION_BODIES COLON FUNCTION_SIGNATUR INSTRUCTIONS
;

FUNCTION_SIGNATUR
	: ROUND_BRACKET_OPEN FUNCTION_PARAMETERS ROUND_BRACKET_CLOSE
;


FUNCTION_PARAMETERS
	: FUNCTION_PARAMETERS FUNCTION_PARAMETER
;

FUNCTION_PARAMETER
	: VARIABLE
	| VARIABLE COLON IDENTIFIERS
	| VARIABLE COLON IDENTIFIERS OPERAND_EQUAL EXPRESSION
	| VARIABLE EXCLAMATION_MARK IDENTIFIERS
	| VARIABLE QUESTION_MARK IDENTIFIERS
	| VARIABLE QUESTION_MARK IDENTIFIERS COLON IDENTIFIERS
	| VARIABLE QUESTION_MARK IDENTIFIERS COLON IDENTIFIERS OPERAND_EQUAL EXPRESSION
;


IDENTIFIERS
	: IDENTIFIERS IDENTIFIER
	| IDENTIFIERS COMMA IDENTIFIER
;*/

print: KEYWORD_PRINT SPACE param=expressiontype;

assign
	: key=variable OPERAND_EQUAL value=expression
/*	| expression SQUARED_BRACKET_OPEN expression SQUARED_BRACKET_CLOSE OPERAND_EQUAL expression */
;


expression
	: expressiontype
/*	| expression RANGE expression RANGE expression
	| expression RANGE expression
	| ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE
	| OPERAND_MINUS EXPRESSION %prec OPERAND_MINUS 
	| expression operand expression
	| expression comparator expression
	| expression SQUARED_BRACKET_OPEN expression SQUARED_BRACKET_CLOSE
	| expression SQUARED_BRACKET_OPEN expression COLON SQUARED_BRACKET_CLOSE
	| expression SQUARED_BRACKET_OPEN COLON expression SQUARED_BRACKET_CLOSE
	| expression SQUARED_BRACKET_OPEN expression COLON expression SQUARED_BRACKET_CLOSE*/
;

operand
	: OPERAND_PLUS
	| OPERAND_MINUS
	| OPERAND_ASTERISK
	| OPERAND_SLASH
	| OPERAND_CARET
	| OPERAND_AND
	| OPERAND_OR
;


comparator
	: COMPARATOR_EQUAL
	| COMPARATOR_NOT_EQUAL
	| COMPARATOR_LESS
	| COMPARATOR_GREATER
	| COMPARATOR_LESS_EQUAL
	| COMPARATOR_GREATER_EQUAL
;


/* Types */
expressiontype: type;

type: boolean;

/*
type
	: INTEGER
	| FLOAT
	| boolean
	| string
	| variable
	| array
	| dictionary 
;*/

boolean
	: BOOLEAN_TRUE
	| BOOLEAN_FALSE
;

string
	: STRING_SINGLE_QUOTE
	| STRING_DOUBLE_QUOTE
;

array: SQUARED_BRACKET_OPEN (elements+=expression COMMA)*  SQUARED_BRACKET_CLOSE;

/*
dictionary
	: CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
	| CURLY_BRACKET_OPEN DICTIONARY_ELEMENTS CURLY_BRACKET_CLOSE
;

DICTIONARY_ELEMENTS
	: DICTIONARY_ELEMENTS EXPRESSION COLON EXPRESSION
	| DICTIONARY_ELEMENTS COMMA EXPRESSION COLON EXPRESSION
	| DICTIONARY_ELEMENTS COMMA
;
*/






/* symbols */


KEYWORD_PRINT: 'print';
KEYWORD_INCLUDE: 'include';
KEYWORD_IMPORT: 'import';
					

CONTROL_IF: 'if';
CONTROL_FOR: 'for';
CONTROL_IN: 'in';
CONTROL_END: 'end';


OPERAND_EQUAL: '=';
OPERAND_PLUS: '+';
OPERAND_MINUS: '-';
OPERAND_ASTERISK: '*';
OPERAND_SLASH: '/';
OPERAND_CARET: '^';
OPERAND_AND: '&&';
OPERAND_OR: '||';


RANGE: '..';
SQUARED_BRACKET_OPEN: '[';
SQUARED_BRACKET_CLOSE: ']';
CURLY_BRACKET_OPEN: '{';
CURLY_BRACKET_CLOSE: '}';
ROUND_BRACKET_OPEN: '(';
ROUND_BRACKET_CLOSE: ')';


SEMICOLON: ';';
COLON: ':';
COMMA: ',';
QUESTION_MARK: '?';
EXCLAMATION_MARK: '!';

DELIMITER: ( NEWLINE | SEMICOLON )+ -> skip;
NEWLINE: ('\n'|'\r')+ -> skip;
SPACE: ' '+ -> skip;
TAB: '\t'+ -> skip;

COMPARATOR_EQUAL: '==';
COMPARATOR_NOT_EQUAL: '!=';
COMPARATOR_GREATER: '>';
COMPARATOR_GREATER_EQUAL: '>=';
COMPARATOR_LESS: '<';
COMPARATOR_LESS_EQUAL: '<=';

BOOLEAN_TRUE: 'TRUE';
BOOLEAN_FALSE: 'FALSE';


INTEGER: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;

STRING_DOUBLE_QUOTE: '"' .*? '"';
STRING_SINGLE_QUOTE: '\'' .*? '\'';

FUNCTION_NAME: ':' [a-zA-Z]+;

IDENTIFIER: [a-zA-Z0-9]+;
COMMENT: '#' [^\n]* -> skip;