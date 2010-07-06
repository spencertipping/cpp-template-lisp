#include <iostream>
#include "constants.h"

// Encoding the K combinator uniformly
struct k {
  template<class t>
  struct apply {
    struct type {
      template<class u>
      struct apply {
        typedef t type;
      };
    };
  };
};

typedef has_a_number<5> t1;
typedef has_a_number<6> t2;
typedef k::apply<t1>::type::apply<t2>::type should_be_t1;

int main () {
  std::cout << "t1::number           = " << t1::number           << std::endl <<
               "should_be_t1::number = " << should_be_t1::number << std::endl;
}
