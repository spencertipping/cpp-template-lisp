#ifndef UNIT_TYPE_EQUIVALENCE_HH
#define UNIT_TYPE_EQUIVALENCE_HH

namespace lisp {
namespace unit {

template <class c1, class c2>
class type_equality_assertion_failed_ {
  c1 the_left_hand_side_;
  c2 the_right_hand_side_;

  void when_testing_assignability () {
    the_left_hand_side_ = the_right_hand_side_;
    the_right_hand_side_ = the_left_hand_side_;
  }
};

}
}

#define assert_types_equal(types...) \
  typedef ::lisp::unit::type_equality_assertion_failed_<types...> \
          type_equality_check_##__LINE__;

#endif
