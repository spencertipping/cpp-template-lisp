#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_DEF_ENABLED
#  define def(name) struct name
#else
#  undef  LISP_PREPROCESSOR_DEF_ENABLED
#  undef  def
#endif
