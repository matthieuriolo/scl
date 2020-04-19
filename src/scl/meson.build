# status = run_command(
# 	find_program('antlr', required: true),
# 	'-Dlanguage=Cpp',
# 	'-no-listener',
# 	'-visitor',
# 	'-encoding',
# 	'UTF-8',
# 	'-o',
# 	'parser',
# 	'scl.g4',
# )

# if status.returncode() != 0
# 	error('failing to build parser files')
# endif


# todo - switch back to custom target
antlr = find_program('antlr', required: true)
gen_antlr = custom_target('buildparser',
	output: [
		'sclParser.cpp',
		'sclVisitor.cpp',
		'sclBaseVisitor.cpp',
		'sclLexer.cpp',
	],
	input: 'scl.g4',
	command: [
 		antlr,
 		'-Dlanguage=Cpp',
 		'-no-listener',
 		'-visitor',
 		'-encoding',
 		'UTF-8',
 		'-o',
 		meson.current_source_dir() + '/parser',
 		#'@BUILD_DIR@/parser',
 		meson.current_source_dir() + '/scl.g4'
 	],
	build_by_default: true,
)

parser_files = files(
	'parser/sclParser.cpp',
	'parser/sclVisitor.cpp',
	'parser/sclBaseVisitor.cpp',
	'parser/sclLexer.cpp',
)
