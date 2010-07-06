#warning This example is deliberately broken, so a compilation error is normal.

// Encoding the K combinator uniformly, but with compile errors
struct k {
  template<class t>
  struct apply {
    template<class u>
    struct apply {
      typedef t type;
    };
  };
};
