#ifndef CORE_CONS_HH
#define CORE_CONS_HH

#include "core.hh"
#include LISP_BEGIN_CORE_MODULE()
struct cons {
  template <class h, class t>
  struct apply {
    struct type {
      template <class f>
      struct apply {
        typedef f<h, t> type;
      };
    };
  };
};
#include LISP_END_CORE_MODULE()

#endif
