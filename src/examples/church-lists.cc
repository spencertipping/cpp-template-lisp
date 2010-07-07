#include <iostream>

#define fn(args...)        template <args> struct
#define lambda(args...)    template <args> struct apply

#define lift(name, xs...)  template <xs> class name
#define call(v, xs...)     typename v::template apply<xs>::type

#define let(var, value...) private: typedef value var
#define ret(value...)      public:  typedef value type
#define val(e)             public:  struct type { enum { value = e }; }

struct head {lambda(class h, class t) {ret(h);};};
struct tail {lambda(class h, class t) {ret(t);};};

namespace _select {
  lambda(bool b)   {ret(head);};
  lambda() <false> {ret(tail);};
}

struct select {
  lambda(class t) {ret(call(_select, t::type::value));};
};

fn(class h, class t) cons {
  lambda(class f) {
    ret(call(f, h, t));
  };
};

struct nil {
  typedef int type;
};

struct map {
  lambda(class f, class cell) {
    let(mapped_head, call(f, call(cell, head)));
    let(mapped_tail, call(map, f, call(cell, tail)));
    ret(cons<mapped_head, mapped_tail>);
  };

  lambda(class f) <f, nil> {
    ret(nil);
  };
};

struct filter {
  lambda(class f, class cell) {
    let(h,             call(cell, head));
    let(filtered_tail, call(filter, f, call(cell, tail)));
    let(choices,       cons<cons<h, filtered_tail>, filtered_tail>);
    let(selector,      call(select, call(f, h)));

    ret(call(choices, selector));
  };

  lambda(class f) <f, nil> {
    ret(nil);
  };
};

fn(int n) int_wrap {
  val(n);
};

fn(class x) plus {
  lambda(class y) {
    val(x::type::value + y::type::value);
  };
};

fn(int n) is_divisible_by {
  lambda(class x) {
    val(x::type::value % n == 0);
  };
};

int main () {
  typedef cons<int_wrap<5>, cons<int_wrap<6>, nil>>      the_list;
  typedef plus<int_wrap<6>>                              the_function;
  typedef is_divisible_by<3>                             the_criterion;
  typedef filter::apply<the_criterion, the_list>::type   the_short_list;
  typedef map::apply<the_function, the_short_list>::type the_result;
  typedef the_result::apply<head>                        should_be_seven;

  std::cout << "head(map(x -> x + 6, filter(x % 3 == 0, list(5, 6)))) = " <<
               should_be_seven::type::value << std::endl;
}
