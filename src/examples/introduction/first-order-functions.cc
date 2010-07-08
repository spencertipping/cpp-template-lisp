#include <iostream>
#include "constants.hh"

// Defining the identity function, where the result
// can be retrieved by specifying bar<T>::type
template<class t> struct bar {
  typedef t type;
};

// Defining a global constant identity_result = bar(also_foo)
typedef bar<also_foo>::type identity_result;

int main () {
  std::cout << "foo::value             = " <<
                foo::value                 << std::endl <<
               "also_foo::value        = " <<
                also_foo::value            << std::endl <<
               "identity_result::value = " <<
                identity_result::value     << std::endl;
}
