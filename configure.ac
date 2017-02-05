AC_INIT([project], [0.0.1])
AC_PREREQ([2.68])

AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([subdir-objects foreign -Wall -Werror])
AC_CONFIG_FILES([Makefile src/Makefile tests/Makefile])

AC_PROG_CC()
AC_PROG_RANLIB
AM_PROG_AR
AC_REQUIRE_AUX_FILE([tap-driver.sh])

AC_OUTPUT
