#include <iostream>

#define letrec(name, params, defaults, expression) \
  template params \
  struct name defaults { \
    enum { value = expression }; \
  };

#define call(name, params...) (name<params>::value)

letrec(fibonacci, <int n>, , call(fibonacci, n - 1) + call(fibonacci, n - 2))
letrec(fibonacci, <>, <0>, 0)
letrec(fibonacci, <>, <1>, 1)

int main () {
  std::cout << "fibonacci<10>::value = " << fibonacci<10>::value << std::endl;
}
