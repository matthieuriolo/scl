grammar scl;

/* grammar */
module: content=scope EOF;
scope: (DELIMITER | SPACE | (instructions += instruction SPACE* DELIMITER))* (instructions += instruction)?;


variable: '$' IDENTIFIER;



instruction
	: print
	| includeFile
//	| includeCModule
	| assign
	| assignProperty
//	| FUNCTION_DECLARATION
//	| command
	| ifControl
	| forControl
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



/* instructions */
ifControl: CONTROL_IF SPACE+ expression SPACE* DELIMITER scope CONTROL_END;
forControl: CONTROL_FOR SPACE+ variable SPACE+ CONTROL_IN SPACE+ expression SPACE* DELIMITER scope CONTROL_END;

print: KEYWORD_PRINT SPACE+ expression;

assign: key=variable SPACE* OPERAND_EQUAL SPACE* value=expression;
assignProperty: property=expression SPACE* SQUARED_BRACKET_OPEN SPACE* key=expression SPACE* SQUARED_BRACKET_CLOSE SPACE* OPERAND_EQUAL SPACE* value=expression;

includeFile: KEYWORD_INCLUDE SPACE+ path=ARGUMENT;
//includeCModule: KEYWORD_IMPORT SPACE+ path=~(DELIMITER)+;

/* expression */
expression
	: expressionConcated
	| expressionAccess
;

expressionAccess
	: access
	| accessRange
;

access
	: property=expressionConcated SPACE* SQUARED_BRACKET_OPEN SPACE* key=expressionConcated SPACE* SQUARED_BRACKET_CLOSE
;

accessRange
	: property=expressionConcated SPACE* SQUARED_BRACKET_OPEN SPACE* start=expressionConcated SPACE* COLON SPACE* SQUARED_BRACKET_CLOSE
	| property=expressionConcated SPACE* SQUARED_BRACKET_OPEN SPACE* COLON SPACE* end=expressionConcated SPACE* SQUARED_BRACKET_CLOSE
	| property=expressionConcated SPACE* SQUARED_BRACKET_OPEN SPACE* start=expressionConcated SPACE* COLON SPACE* end=expressionConcated SPACE* SQUARED_BRACKET_CLOSE
;

expressionConcated
	: expressionGrouped
	| left=expressionConcated SPACE* operand=(
		  OPERAND_PLUS
		| OPERAND_MINUS
		| OPERAND_ASTERISK
		| OPERAND_SLASH
		| OPERAND_CARET
		| OPERAND_AND
		| OPERAND_OR
	) SPACE* right=expressionConcated
	| left=expressionConcated SPACE* comparator=(
		  COMPARATOR_EQUAL
		| COMPARATOR_NOT_EQUAL
		| COMPARATOR_LESS
		| COMPARATOR_GREATER
		| COMPARATOR_LESS_EQUAL
		| COMPARATOR_GREATER_EQUAL
	) SPACE* right=expressionConcated
	| left=expressionConcated SPACE* range=RANGE SPACE* right=expressionConcated
;

expressionGrouped
	: expressionConst
	| ROUND_BRACKET_OPEN SPACE* expression SPACE* ROUND_BRACKET_CLOSE
;

expressionConst
	: expressionType
	| expressionUnary
	| variable
	| array
	| dictionary
;

expressionUnary: OPERAND_MINUS expression;

array: SQUARED_BRACKET_OPEN SPACE* (elements+=expression SPACE* COMMA SPACE*)* (elements+=expression  SPACE* COMMA?)?  SPACE* SQUARED_BRACKET_CLOSE;

dictionary: CURLY_BRACKET_OPEN  SPACE* (elements+=dictionaryElements SPACE* COMMA SPACE*)* (elements+=dictionaryElements SPACE* COMMA?)? SPACE* CURLY_BRACKET_CLOSE;

dictionaryElements: key=expression SPACE* COLON SPACE* value=expression;


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

DELIMITER: (NEWLINE | SEMICOLON);
NEWLINE: ('\n'|'\r');
SPACE: [ \t]+;


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
COMMENT: '#' ~'\n'* -> skip;

ARGUMENT: (~[$#\n ] | '\\ ' | '\\$' | '\\#')+;