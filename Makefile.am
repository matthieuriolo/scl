ACLOCAL_AMFLAGS = -I m4macros ${ACLOCAL_FLAGS}
bin_PROGRAMS = scl

AM_YFLAGS = -d

AM_CXXFLAGS = $(INIT_CFLAGS) -I$(top_srcdir)/src -Wall

SUBDIRS = examples/01.tests/15.import

scl_SOURCES = \
	src/scl/parser.yy \
	src/scl/lexer.ll \
	\
	src/main.cpp \
	\
	src/scl/context.cpp \
	src/scl/module.cpp \
	src/scl/parserresult.cpp \
	src/scl/scope.cpp \
	src/scl/type.cpp \
	\
	src/scl/ast/command.cpp \
	src/scl/ast/dictionary.cpp \
	src/scl/ast/array.cpp \
	src/scl/ast/access.cpp \
	src/scl/ast/range.cpp \
	src/scl/ast/rangeiterator.cpp \
	src/scl/ast/assign.cpp \
	src/scl/ast/assignattribute.cpp \
	src/scl/ast/expression.cpp \
	src/scl/ast/expressiontype.cpp \
	src/scl/ast/instruction.cpp \
	src/scl/ast/if.cpp \
	src/scl/ast/import.cpp \
	src/scl/ast/include.cpp \
	src/scl/ast/for.cpp \
	src/scl/ast/operand.cpp \
	src/scl/ast/comparator.cpp \
	src/scl/ast/variable.cpp \
	src/scl/ast/unaryminus.cpp \
	src/scl/ast/functiondeclare.cpp \
	src/scl/ast/print.cpp \
	src/scl/ast/printStatic.cpp \
	\
	src/scl/types/function.cpp \
	src/scl/types/functionbody.cpp \
	src/scl/types/functionparameter.cpp \
	src/scl/types/dictionary.cpp \
	src/scl/types/array.cpp \
	src/scl/types/boolean.cpp \
	src/scl/types/string.cpp \
	src/scl/types/float.cpp \
	src/scl/types/integer.cpp \
	src/scl/types/iterator.cpp \
	src/scl/types/iteratorarray.cpp \
	src/scl/types/iteratordictionary.cpp \
	src/scl/types/iteratorstring.cpp \
	src/scl/types/iteratorinteger.cpp \
	src/scl/types/iteratorfloat.cpp \
	src/scl/types/undefined.cpp
	

clean-local:
	rm src/scl/parser.hh src/scl/parser.cc location.hh

# create target for README
README: README.md