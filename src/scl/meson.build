
status = run_command(
	find_program('antlr', required: true),
	'-Dlanguage=Cpp',
	'-no-listener',
	'-visitor',
	'-encoding',
	'UTF-8',
	'-o',
	'parser',
	'scl.g4',
)

if status.returncode() != 0
	error('failing to build parser files')
endif


parser_files = files(
	'parser/sclParser.cpp',
	'parser/sclVisitor.cpp',
	'parser/sclBaseVisitor.cpp',
	'parser/sclLexer.cpp',
)