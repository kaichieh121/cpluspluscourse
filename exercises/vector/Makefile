all: mylib.a vector

solution: all

clean:
	rm -f *.o *.a *.so vector *~ callgrind.out.*

vector.o: vector.cpp vector.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

mylib.a: vector.o
	ar rcs $@ $<

vector : main.cpp mylib.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
