#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_LET_ENABLED
#  define let(name, value...) private: typedef value name
#  define local_def(name)     private: struct name
#else
#  undef  LISP_PREPROCESSOR_LET_ENABLED
#  undef  let
#  undef  local_def
#endif
