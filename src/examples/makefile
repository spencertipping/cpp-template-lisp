WORKING = first-order-functions higher-order-functions indirect-functions \
          apply-two-function specialization inner-specialization fibonacci \
          fibonacci-piecewise
BROKEN  = indirect-functions-broken inner-specialization-broken \
          fibonacci-piecewise-broken

CC      = g++
CC_OPTS = -g -Wall -std=gnu++0x

all: $(WORKING)
broken: $(BROKEN)

.PHONY: clean
clean:
	rm -f $(WORKING) $(BROKEN)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@ || true
