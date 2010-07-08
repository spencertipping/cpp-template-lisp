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

// The definition of symbol_concat is basically the same as BOOST_JOIN.
#define symbol_concat(x, y) symbol_concat_aux(x, y)
#define symbol_concat_aux(x, y) x ## y

#define assert_types_equal(types...) \
  typedef ::lisp::unit::type_equality_assertion_failed_<types> \
          symbol_concat(type_equality_check_, __LINE__);

#endif
