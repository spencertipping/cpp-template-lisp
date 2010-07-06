WORKING = first-order-functions higher-order-functions indirect-functions \
          apply-two-function specialization inner-specialization preprocessor/k
ERRORS  = indirect-functions-broken inner-specialization-broken

CC      = g++
CC_OPTS = -g -Wall -std=gnu++0x

all: $(WORKING)
broken: $(ERRORS)

.PHONY: clean
clean:
	rm -f $(WORKING) $(ERRORS)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@ || true
