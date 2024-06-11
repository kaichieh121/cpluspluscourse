all: libcalculator.a calculator

solution: all

clean:
	rm -f *.o *.a *.so calculator *~ callgrind.out.*

calculator.o: calculator.cpp calculator.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libcalculator.a: calculator.o
	ar rcs $@ $<

calculator : main.cpp libcalculator.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
