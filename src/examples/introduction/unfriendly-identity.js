// An unfriendly identity function.
var identity = function (x) {
  return {type: x};
};

// Invocations must now look like this:
var y = identity(x).type;
