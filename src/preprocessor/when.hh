#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_WHEN_ENABLED
#  define when(parameters...) template <parameters> struct apply
#else
#  undef  LISP_PREPROCESSOR_WHEN_ENABLED
#  undef  when
#endif
