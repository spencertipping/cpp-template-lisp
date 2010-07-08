#ifndef CORE_CONS_HH
#define CORE_CONS_HH

#include "module-begin.hh"
defun(cons, class h, class t) {
  local_defun(closure, class f) {
    ret(call(f, h, t));
  };
  ret(closure);
};

defun(head, class h, class t) {ret(h);};
defun(tail, class h, class t) {ret(t);};

def(nil) {};
#include "module-end.hh"

#endif
