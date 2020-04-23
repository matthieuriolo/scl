grammar scl;

/* grammar */
module: content=scope EOF;
scope: (instructions += instruction DELIMITER)* (instructions += instruction)?;


variable: '$' IDENTIFIER;



instruction
	: assign
	| print
//	| INCLUDE
//	| IMPORT
//	| FUNCTION_DECLARATION
//	| command
	| ifControl
//	| CONTROL_FOR variable CONTROL_IN expression DELIMITER scope DELIMITER CONTROL_END
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

ifControl: CONTROL_IF expression DELIMITER scope CONTROL_END;

print: KEYWORD_PRINT expression;

assign
	: key=variable OPERAND_EQUAL value=expression
/*	| expression SQUARED_BRACKET_OPEN expression SQUARED_BRACKET_CLOSE OPERAND_EQUAL expression */
;

expression
	: expressionConcated
;

expressionConcated
	: expressionGrouped
	| left=expressionConcated operand=(
		  OPERAND_PLUS
		| OPERAND_MINUS
		| OPERAND_ASTERISK
		| OPERAND_SLASH
		| OPERAND_CARET
		| OPERAND_AND
		| OPERAND_OR
	) right=expressionConcated
	| left=expressionConcated comparator=(
		  COMPARATOR_EQUAL
		| COMPARATOR_NOT_EQUAL
		| COMPARATOR_LESS
		| COMPARATOR_GREATER
		| COMPARATOR_LESS_EQUAL
		| COMPARATOR_GREATER_EQUAL
	) right=expressionConcated
;

expressionGrouped
	: expressionConst
	| ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE
;

expressionConst
	: expressionType
	| expressionUnary
	| variable
	| array
	| dictionary
//	| expression RANGE expression RANGE expression
//	| expression RANGE expression
//	| expression SQUARED_BRACKET_OPEN expression SQUARED_BRACKET_CLOSE
//	| expression SQUARED_BRACKET_OPEN expression COLON SQUARED_BRACKET_CLOSE
//	| expression SQUARED_BRACKET_OPEN COLON expression SQUARED_BRACKET_CLOSE
//	| expression SQUARED_BRACKET_OPEN expression COLON expression SQUARED_BRACKET_CLOSE
;

expressionUnary: OPERAND_MINUS expression;

array: SQUARED_BRACKET_OPEN (elements+=expression COMMA)*  (elements+=expression COMMA?)? SQUARED_BRACKET_CLOSE;

dictionary: CURLY_BRACKET_OPEN (elements+=dictionaryElements COMMA)* (elements+=dictionaryElements COMMA?)? CURLY_BRACKET_CLOSE;

dictionaryElements: key=expression COLON value=expression;



/* Types */
expressionType: type;

type
	: boolean
	| numericInt
	| numericFloat
	| string
;

boolean
	: BOOLEAN_TRUE
	| BOOLEAN_FALSE
;

numericInt: INTEGER;
numericFloat: FLOAT;

string
	: STRING_SINGLE_QUOTE
	| STRING_DOUBLE_QUOTE
;



/* symbols */

DELIMITER: (NEWLINE | SEMICOLON)+;
NEWLINE: ('\n'|'\r')+ -> skip;
SPACE: (' ' | TAB)+ -> skip;
TAB: '\t'+ -> skip;


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
COMMENT: SPACE* '#' ~'\n'* '\n'*-> skip;