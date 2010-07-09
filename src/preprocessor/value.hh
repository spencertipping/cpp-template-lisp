#ifndef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_VALUE_ENABLED
#  define let_value(name, v...) \
     private: struct name { enum { value = v }; };
#else
#  undef  LISP_PREPROCESSOR_VALUE_ENABLED
#  undef  let_value
#endif
