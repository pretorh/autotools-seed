# programs to compile for tests
check_PROGRAMS =
check_PROGRAMS += project-test.aout

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
