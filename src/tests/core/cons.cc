#include "unit-test.hh"

deftest(cons_instantiation) {
  let(foo,  call(cons, n<5>, n<6>));
  let(five, call(head, foo));
  let(six,  call(tail, foo));
  
};
