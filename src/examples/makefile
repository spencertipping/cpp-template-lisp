all: first-order-functions higher-order-functions
run: all
	./first-order-functions
	./higher-order-functions

%: %.cc
	g++ -g -Wall $< -o $@
