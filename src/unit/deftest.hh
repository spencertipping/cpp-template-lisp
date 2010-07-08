#ifndef UNIT_DEFTEST_HH
#define UNIT_DEFTEST_HH

#define deftest(name) struct name
#define runtest(name) static name symbol_concat(test_enablement_, __LINE__)

#endif
