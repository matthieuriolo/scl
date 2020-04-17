
antlr = find_program('antlr', required: true)

antlr_src = custom_target('build-parser',
	output: [
		'sclParser.cpp',
		'sclVisitor.cpp',
		'sclBaseVisitor.cpp',
		'sclLexer.cpp',
	],
	command: [
		antlr,
		'-Dlanguage=Cpp',
		'-no-listener',
		'-visitor',
		'-encoding',
		'UTF-8',
		meson.current_source_dir() + '/scl.g4'
	],
)