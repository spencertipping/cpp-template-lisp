// Protect from argument separation in the preprocessor.
#define v(xs...) xs

// Define a named expanding slot.
#define slot(name, parameters) \
  template<parameters> struct name

// Define a function that can have specialized closures.
#define function(name, cases...) \
  namespace name##_internals { cases } \
  struct name { typedef name##_internals::apply apply; }

// Define either a general or specialized case.
#define when(parameters) slot(apply, parameters)
