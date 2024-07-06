all: libclass_2.a class_2

solution: all

clean:
	rm -f *.o *.a *.so class_2 *~ callgrind.out.*

class_2.o: class_2.cpp class_2.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libclass_2.a: class_2.o
	ar rcs $@ $<

class_2 : main.cpp libclass_2.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
