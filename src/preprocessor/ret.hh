#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_RET_ENABLED
#  define ret(value...) public: typedef value type
#else
#  undef  LISP_PREPROCESSOR_RET_ENABLED
#  undef  ret
#endif
