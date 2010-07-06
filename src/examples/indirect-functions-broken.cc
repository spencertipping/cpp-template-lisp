// Encoding the K combinator uniformly
struct k {
  template<class t>
  struct apply {
    template<class u>
    struct invoke_foobar {
      typedef t type;
    };

    typedef invoke_foobar apply;
  };
};
