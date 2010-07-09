#include "core/cons.hh"
#include "core/id.hh"
#include "unit/test.hh"
#include "unit/fixtures.hh"

deftest(id_invocation) {
  assert_types_equal(n(5), call_static(id, n(5)));
  assert_types_equal(cons, call_static(id, cons));
};
