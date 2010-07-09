#ifndef CORE_CONS_HH
#define CORE_CONS_HH

#include "module/begin.hh"
def(cons) {
  when(class h, class t) {
    local_def(closure) fn(class f, call(f, h, t));
    ret(closure);
  };

  def(hd) fn(q(class h, class t), h);
  def(tl) fn(q(class h, class t), t);

  def(nil) fn(class f, nil);
};

#include "module/end.hh"

#endif
