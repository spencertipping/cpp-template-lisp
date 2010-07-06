#include <iostream>
#include "constants.h"

// Defining the K combinator
template<class t>
struct k {
  template<class u>
  struct apply {
    typedef t type;
  };
};

// Using that on two types
typedef has_a_number<5> t1;
typedef has_a_number<6> t2;
typedef k<t1>::apply<t2>::type should_be_t1;

int main () {
  std::cout << "t1::number           = " << t1::number           << std::endl <<
               "should_be_t1::number = " << should_be_t1::number << std::endl;
}
