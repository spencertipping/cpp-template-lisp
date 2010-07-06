#define global_apply(lhs, args...) lhs::apply<args>::type
#define apply(lhs, args...) lhs::template apply<args>::type
