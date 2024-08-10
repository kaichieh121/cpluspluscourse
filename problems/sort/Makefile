all: main

solution: all

clean:
	rm -f *.o *.a *.so main *~ callgrind.out.*

main : main.cpp
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
