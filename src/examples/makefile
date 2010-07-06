WORKING = first-order-functions higher-order-functions indirect-functions
ERRORS  = indirect-functions-broken

CC      = g++
CC_OPTS = -g -Wall

all: $(WORKING)
broken: $(ERRORS)

.PHONY: run
run: all
	./first-order-functions
	./higher-order-functions
	./indirect-functions

.PHONY: clean
clean:
	rm -f $(WORKING) $(ERRORS)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@
