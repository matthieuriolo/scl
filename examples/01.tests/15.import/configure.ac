#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([scl], [0.0.1], [matthieu.riolo@googlemail.com])
AC_CONFIG_SRCDIR([main.cpp])
AC_CONFIG_HEADERS([config.h])

# init m4 parser
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4macros])


# init automake
AM_INIT_AUTOMAKE([subdir-objects])
AC_CONFIG_FILES([Makefile])


# init linker
LT_INIT
LT_LANG([C++])
AC_LANG([C++])
AX_CXX_COMPILE_STDCXX_11

# Checks for programs.
AC_PROG_CXX


# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_SIZE_T

AC_OUTPUT

