#ifndef UNIT_FIXTURES_HH
#define UNIT_FIXTURES_HH

namespace lisp {
namespace unit {

template<int n>
struct int_wrapper {
  enum { value = n };
};

}
}

#define n(x) ::lisp::unit::int_wrapper<x>

#endif
