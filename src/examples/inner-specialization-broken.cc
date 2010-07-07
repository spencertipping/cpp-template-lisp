template<class t>
struct container {
  template<class u>
  struct piecewise {
    typedef u type;
  };

  // Compiler complains about this:
  template<>
  struct piecewise<int> {
    typedef t type;
  };
};

typedef container<int>::piecewise<int>::type foo;
