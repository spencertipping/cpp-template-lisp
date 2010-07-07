template <int n>
struct foo {
  typedef foo bar;
};

typedef foo<10>::bar should_be_a_template;
typedef should_be_a_template<10> problem;
