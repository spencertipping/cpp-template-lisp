#include <iostream>
#include "constants.h"

// General case
template<class t>
struct piecewise {
  typedef t type;
};

// When t = has_a_number<50>, do this instead
template<>
struct piecewise<has_a_number<50>> {
  typedef has_a_number<100> type;
};

typedef piecewise<has_a_number<3>>::type  general;
typedef piecewise<has_a_number<50>>::type specialized;

int main () {
  std::cout << "general::number     = " << general::number     << std::endl <<
               "specialized::number = " << specialized::number << std::endl;
}
