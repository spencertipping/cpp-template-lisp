WORKING  = first-order-functions higher-order-functions indirect-functions \
           apply-two-function specialization inner-specialization fibonacci \
           fibonacci-piecewise linked-list church-lists

BROKEN   = indirect-functions-broken inner-specialization-broken \
           fibonacci-piecewise-broken self-reference-broken

BASE_DIR = ../../
CC       = g++
CC_OPTS  = -g -Wall -std=gnu++0x -I$(BASE_DIR)

all: $(WORKING)
broken: $(BROKEN)

.PHONY: clean
clean:
	rm -f $(WORKING) $(BROKEN)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@ || true
