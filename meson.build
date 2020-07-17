project(
	'scl',
	'cpp',
	version: '0.1',
	default_options: ['cpp_std=c++11'],
	meson_version: '>=0.50.1'
)

src = files(
	'src/main.cpp',

	'src/scl/context.cpp',
	'src/scl/module.cpp',
	'src/scl/scope.cpp',
	'src/scl/type.cpp',
	
	'src/scl/ConformVisitor.cpp',

	'src/scl/ast/command.cpp',
	'src/scl/ast/dictionary.cpp',
	'src/scl/ast/array.cpp',
	'src/scl/ast/access.cpp',
	'src/scl/ast/range.cpp',
	'src/scl/ast/rangeiterator.cpp',
	'src/scl/ast/assign.cpp',
	'src/scl/ast/assignattribute.cpp',
	'src/scl/ast/expression.cpp',
	'src/scl/ast/expressiontype.cpp',
	'src/scl/ast/instruction.cpp',
	'src/scl/ast/if.cpp',
	'src/scl/ast/import.cpp',
	'src/scl/ast/include.cpp',
	'src/scl/ast/for.cpp',
	'src/scl/ast/operand.cpp',
	'src/scl/ast/comparator.cpp',
	'src/scl/ast/variable.cpp',
	'src/scl/ast/unaryminus.cpp',
	'src/scl/ast/functiondeclare.cpp',
	'src/scl/ast/print.cpp',

	'src/scl/types/function.cpp',
	'src/scl/types/functionbody.cpp',
	'src/scl/types/functionparameter.cpp',
	'src/scl/types/dictionary.cpp',
	'src/scl/types/array.cpp',
	'src/scl/types/boolean.cpp',
	'src/scl/types/string.cpp',
	'src/scl/types/float.cpp',
	'src/scl/types/integer.cpp',
	'src/scl/types/iterator.cpp',
	'src/scl/types/iteratorarray.cpp',
	'src/scl/types/iteratordictionary.cpp',
	'src/scl/types/iteratorstring.cpp',
	'src/scl/types/iteratorinteger.cpp',
	'src/scl/types/iteratorfloat.cpp',
	'src/scl/types/undefined.cpp',

	'src/scl/parser/ConformParser.cpp',
	'src/scl/parser/ConformVisitor.cpp',
	'src/scl/parser/ConformBaseVisitor.cpp',
	'src/scl/parser/ConformLexer.cpp',

	'src/scl/parser/CommandParser.cpp',
	'src/scl/parser/CommandVisitor.cpp',
	'src/scl/parser/CommandBaseVisitor.cpp',
	'src/scl/parser/CommandLexer.cpp',
)


antlr_compiler = find_program('antlr')
run_target('build-parser-conform',
	command: [
		antlr_compiler,
		'-Dlanguage=Cpp',
		'-no-listener',
		'-visitor',
		'-encoding',
		'UTF-8',
		'-o',
		meson.current_source_dir() + '/src/scl/parser',
		meson.current_source_dir() + '/src/scl/Conform.g4'
	],
)

run_target('build-parser-command',
	command: [
		antlr_compiler,
		'-Dlanguage=Cpp',
		'-no-listener',
		'-visitor',
		'-encoding',
		'UTF-8',
		'-o',
		meson.current_source_dir() + '/src/scl/parser',
		meson.current_source_dir() + '/src/scl/Command.g4'
	],
)

cpp = meson.get_compiler('cpp')
antlr_runtime = cpp.find_library('antlr4-runtime', required: true)

executable(
	'scl',
	sources: src,
	include_directories: [include_directories('src'), include_directories('/usr/local/include/antlr4-runtime/')],
	dependencies: antlr_runtime
)
