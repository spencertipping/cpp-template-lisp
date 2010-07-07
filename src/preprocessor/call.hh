#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_CALL_ENABLED
#  define call(lhs, rhs...) typename lhs::template apply<rhs>::type
#  define call_static(lhs, rhs...) lhs::apply<rhs>::type
#else
#  undef  LISP_PREPROCESSOR_CALL_ENABLED
#  undef  call
#  undef  call_static
#endif
