all: liblibrary.a library

solution: all

clean:
	rm -f *.o *.a *.so library *~ callgrind.out.*

library.o: library.cpp library.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

liblibrary.a: library.o
	ar rcs $@ $<

library : main.cpp liblibrary.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
