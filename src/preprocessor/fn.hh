#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_FN_ENABLED
#  define fn(params, return_value...) {\
     public: template<params> struct apply { \
       ret(return_value); \
     }; \
   }
#else
#  undef  LISP_PREPROCESSOR_FN_ENABLED
#  undef  fn
#endif
