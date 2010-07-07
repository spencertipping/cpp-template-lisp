#ifndef CORE_CONS_HH
#define CORE_CONS_HH

#include "core.hh"
#include LISP_BEGIN_CORE_MODULE()
defun(cons, class h, class t) {
  local_defun(closure, class f) {
    ret(call(f, h, t));
  };
  ret(closure);
};
#include LISP_END_CORE_MODULE()

#endif
