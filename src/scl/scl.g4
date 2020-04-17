grammar scl;

/* file */
module: instruction+ EOF;

instruction:
	print
;


print:
	'print test'
;