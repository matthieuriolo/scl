
antlr = find_program('antlr', required: true)

antlr_src = custom_target('build-parser',
	output: ['sclParser.cpp', 'sclParser.h'],
	command: [
		antlr,
		'-Dlanguage=Cpp',
		'-no-listener',
		'-visitor',
		'-encoding',
		'UTF-8',
		# '-o',
		# 'antlr4-runtime',
		meson.current_source_dir() + '/scl.g4'
	],
	build_by_default: true,
)
