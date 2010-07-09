UNIT        = core/cons core/id
INTEGRATION =

BASE_DIR    = ../
CC          = g++
CC_OPTS     = -g -Wall -std=gnu++0x -I$(BASE_DIR)

all: $(UNIT) $(INTEGRATION)

.PHONY: clean
clean:
	rm -f $(UNIT) $(INTEGRATION)

%: %.cc
	$(CC) $(CC_OPTS) $< -o $@ || true
