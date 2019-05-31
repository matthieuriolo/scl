ACLOCAL_AMFLAGS = -I m4macros ${ACLOCAL_FLAGS}
bin_PROGRAMS = scl

# EXTRA_DIST = autogen.sh
# AM_PROG_LEX

AM_YFLAGS = -d

AM_CXXFLAGS = $(INIT_CFLAGS) -I$(top_srcdir)/src -Wall

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
	src/scl/ast/assign.cpp \
	src/scl/ast/expression.cpp \
	src/scl/ast/expressiontype.cpp \
	src/scl/ast/instruction.cpp \
	src/scl/ast/operand.cpp \
	src/scl/ast/variable.cpp \
	src/scl/ast/print.cpp \
	\
	src/scl/types/string.cpp \
	src/scl/types/float.cpp \
	src/scl/types/integer.cpp \
	src/scl/types/undefined.cpp
	

clean-local:
	rm src/scl/parser.hh src/scl/parser.cc location.hh

# create target for README
README: README.md