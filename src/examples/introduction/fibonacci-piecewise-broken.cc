template <bool n_lt_2, int n>
struct fibonacci_case {
  enum { value = fibonacci<n - 1>::value + fibonacci<n - 2>::value };
};

template <int n>
struct fibonacci_case <true, n> {
  enum { value = n };
};

template <int n>
struct fibonacci {
  enum { value = fibonacci_case<(n < 2), n>::value };
};
