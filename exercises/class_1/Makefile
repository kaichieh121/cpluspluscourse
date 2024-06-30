all: libclass_1.a class_1

solution: all

clean:
	rm -f *.o *.a *.so class_1 *~ callgrind.out.*

class_1.o: class_1.cpp class_1.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libclass_1.a: class_1.o
	ar rcs $@ $<

class_1 : main.cpp libclass_1.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
