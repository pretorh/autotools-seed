bin_PROGRAMS = project
noinst_LIBRARIES =
noinst_LIBRARIES += libfactorial.a

EXTRA_DIST =
EXTRA_DIST += factorial.h

# project
project_CFLAGS = -ggdb -pedantic -Wall -Wextra
project_SOURCES = main.c
project_LDADD = libfactorial.a

# libfactorial.a
libfactorial_a_SOURCES = factorial.c
