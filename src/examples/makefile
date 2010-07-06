WORKING = first-order-functions higher-order-functions \
          indirect-functions apply-two-function
ERRORS  = indirect-functions-broken

CC      = g++
CC_OPTS = -g -Wall -std=gnu++0x

all: $(WORKING)
broken: $(ERRORS)

.PHONY: run
run: all
	./first-order-functions
	./higher-order-functions
	./indirect-functions
	./apply-two-function

.PHONY: clean
clean:
	rm -f $(WORKING) $(ERRORS)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@
