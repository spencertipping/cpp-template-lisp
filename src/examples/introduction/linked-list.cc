#include <iostream>

#define function(name, params, values...) \
  template <params> \
  struct name { \
    enum { values }; \
  }

// Prevents commas from separating the arguments:
#define q(args...) args

function(cons, q(class X, class Y), car = X::value, cdr = Y::value);
function(car, class T, value = T::car);
function(cdr, class T, value = T::cdr);
function(int_wrapper, int n, value = n);

int main () {
  std::cout << "car(cons(5, 6)) = " <<
               car<cons<int_wrapper<5>, int_wrapper<6>>>::value << std::endl;
}
