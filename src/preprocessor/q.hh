#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_Q_ENABLED
#  define q(x...) x
#else
#  undef  LISP_PREPROCESSOR_Q_ENABLED
#  undef  q
#endif
