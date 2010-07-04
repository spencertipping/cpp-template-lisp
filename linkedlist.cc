template<class X, class Y>
struct cons {
  enum { car = X::value, cdr = Y::value };
};

template<class T>
struct car {
  enum { value = T::car };
};

template<class T>
struct cdr {
  enum { value = T::cdr };
};

template<int n>
struct int_wrapper {
  enum { value = n };
};

#include <iostream>

int main () {
  std::cout << car<cons<int_wrapper<5>, int_wrapper<6> > >::value << std::endl;
}
