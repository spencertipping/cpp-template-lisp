#include <iostream>
#include "constants.hh"

namespace inside_container {
  template<class t, class u>
  struct piecewise {
    typedef u type;
  };

  template<class t>
  struct piecewise<t, int> {
    typedef t type;
  };
}

template<class t>
struct container {
  template<class u>
  struct piecewise {
    typedef typename inside_container::piecewise<t, u>::type type;
  };
};

typedef has_a_number<1> t1;
typedef has_a_number<2> t2;
typedef container<t1>::piecewise<t2>::type  general;
typedef container<t1>::piecewise<int>::type specialized;

int main () {
  std::cout << "general::number     = " << general::number     << std::endl <<
               "specialized::number = " << specialized::number << std::endl;
}
