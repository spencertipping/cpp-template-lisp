#warning This example is deliberately broken, so a compilation error is normal.

struct container {
  template<class u>
  struct piecewise {
    typedef u type;
  };

};

  // Compiler complains about this:
  template<>
  struct container::piecewise<int> {
    typedef char type;
  };


typedef container::piecewise<int>::type foo;
