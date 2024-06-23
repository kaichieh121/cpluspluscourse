all: libpassby.a passby

solution: all

clean:
	rm -f *.o *.a *.so passby *~ callgrind.out.*

passby.o: passby.cpp passby.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libpassby.a: passby.o
	ar rcs $@ $<

passby : main.cpp libpassby.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
