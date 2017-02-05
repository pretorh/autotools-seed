# programs to compile for tests
check_PROGRAMS =
check_PROGRAMS += project-test.aout
check_PROGRAMS += factorial.aout.test

TESTS =
TESTS += $(check_PROGRAMS)
TESTS += pass.sh
TESTS += xfail.sh

# tests that are expected to fail
XFAIL_TESTS =
XFAIL_TESTS += xfail.sh

EXTRA_DIST = $(TESTS)

# compile
project_test_aout_SOURCES = project-test.c

# compile
factorial_aout_test_SOURCES = factorial-tests.c
factorial_aout_test_LDADD = ../src/libfactorial.a

# use tap driver for tests
TEST_LOG_DRIVER = $(top_srcdir)/build-aux/tap-driver.sh
