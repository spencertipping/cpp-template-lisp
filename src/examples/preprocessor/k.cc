#include <iostream>
#include "../constants.h"

#include "../../preprocessor.h"

// An encoding of k x y = x
struct k {
  lambda(class x) {
    ret(lambda(class y) {
      ret(x);
    });
  };
};

typedef has_a_number<10> t1;
typedef has_a_number<20> t2;
typedef global_apply(global_apply(k, t1), t2) t1_other;

int main () {
  std::cout << "t1::number       = " << t1::number       << std::endl <<
               "t1_other::number = " << t1_other::number << std::endl;
}
