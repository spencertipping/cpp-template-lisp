// Define a named expanding slot.
#define slot(name, parameters...) \
  template<parameters> struct name

// Define an anonymous expansion.
#define lambda(parameters...) slot(apply, parameters)

// Define a function that can have specialization. This must be top-level.
#define piecewise(name, cases...) \
  namespace name##_internals cases \
  struct name { typedef name##_internals::apply apply; }

// Define either a general or specialized case.
#define when(parameters...) slot(apply, parameters)
