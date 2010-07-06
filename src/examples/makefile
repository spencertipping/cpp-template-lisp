all: first-order-functions higher-order-functions
run: all
	./first-order-functions
	./higher-order-functions
	./indirect-functions-broken

%: %.cc
	g++ -g -Wall $< -o $@
