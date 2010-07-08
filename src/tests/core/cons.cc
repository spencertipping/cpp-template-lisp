#include "core/cons.hh"
#include "unit/test.hh"

deftest(cons_instantiation) {
  let(foo,  call(cons, n(5), n(6)));
  let(five, call(head, foo));
  let(six,  call(tail, foo));

  assert_types_equal(five, n(5));
  assert_types_equal(six,  n(6));
  assert_types_equal(foo,  cons(n(5), n(6)));
};
