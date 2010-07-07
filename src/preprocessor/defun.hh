#ifdef LISP_PREPROCESSOR_DEFINE
#  define LISP_PREPROCESSOR_DEFUN_ENABLED
#  define defun(name, params...)       def(name) {}; \
                                       template<params...> struct name::apply
#  define local_defun(name, params...) local_def(name) {}; \
                                       template<params...> struct name::apply
#else
#  undef  LISP_PREPROCESSOR_DEFUN_ENABLED
#  undef  defun
#  undef  local_defun
#endif
