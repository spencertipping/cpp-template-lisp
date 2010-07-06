// Defining a constant term
struct foo {
  enum {value = 10};
};

// Defining a global constant also_foo = foo
typedef foo also_foo;

// Defining two templated terms that act as constants
template<class t> struct has_a_field {
  t field;
};

template<int n> struct has_a_number {
  enum {number = n};
};
