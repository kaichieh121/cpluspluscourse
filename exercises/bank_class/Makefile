all: libbank.a bank

solution: all

clean:
	rm -f *.o *.a *.so bank *~ callgrind.out.*

bank.o: bank.cpp bank.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libbank.a: bank.o
	ar rcs $@ $<

bank : main.cpp libbank.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
