#include <iostream>

template <class f, bool n_lt_2, int n>
struct fibonacci_case {
  enum { value = f::template recursive<n - 1>::value +
                 f::template recursive<n - 2>::value };
};

template <class f, int n>
struct fibonacci_case <f, true, n> {
  enum { value = n };
};

struct fibonacci_piecewise {
  template <int n>
  struct recursive {
    enum { value = fibonacci_case<fibonacci_piecewise, (n < 2), n>::value };
  };
};

template <int n>
struct fibonacci {
  enum { value = fibonacci_piecewise::template recursive<n>::value };
};

int main () {
  std::cout << "fibonacci<10>::value = " << fibonacci<10>::value << std::endl;
}
