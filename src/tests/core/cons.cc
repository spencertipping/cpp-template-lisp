#include "core/cons.hh"
#include "unit/test.hh"
#include "unit/fixtures.hh"

deftest(cons_instantiation) {
  let(foo,  call_static(cons, n(5), n(6)));
  let(five, call_static(foo, cons::hd));
  let(six,  call_static(foo, cons::tl));

  assert_types_equal(five, n(5));
  assert_types_equal(six,  n(6));
  assert_types_equal(foo,  call_static(cons, n(5), n(6)));
};

runtest(cons_instantiation);
