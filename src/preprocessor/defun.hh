#ifndef LISP_PREPROCESSOR_DEFUN_ENABLED
#  define LISP_PREPROCESSOR_DEFUN_ENABLED
#  define defun(name, params...) \
     def(name) {typedef name##_apply apply;}; \
     template<params> struct name##_apply
#  define local_defun(name, params...) \
     local_def(name) {typedef name##_apply apply;}; \
     template<params> struct name##_apply
#endif
