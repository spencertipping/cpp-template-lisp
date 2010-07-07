#include <iostream>
#include "constants.hh"

// Encoding the type signature as a template parameter specification
struct apply_two {
  template<template<class arg1, class arg2> class f>
  struct apply {
    struct type {
      template<class x>
      struct apply {
        typedef f<x, x> type;
      };
    };
  };
};

// An example value for f
template<class x, class y>
struct sample_f {
  typedef x x_type;
  typedef y y_type;
};

typedef has_a_number<10> t1;
typedef has_a_number<12> t2;
typedef apply_two::apply<sample_f>::type::apply<t1>::type two_of_t1;

int main () {
  std::cout << "t1::number                = " << t1::number << std::endl <<
               "two_of_t1::x_type::number = " << two_of_t1::x_type::number << std::endl <<
               "two_of_t1::y_type::number = " << two_of_t1::y_type::number << std::endl;
}
