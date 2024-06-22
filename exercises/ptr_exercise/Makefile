all: libptr_exercise.a ptr_exercise

solution: all

clean:
	rm -f *.o *.a *.so ptr_exercise *~ callgrind.out.*

ptr_exercise.o: ptr_exercise.cpp ptr_exercise.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libptr_exercise.a: ptr_exercise.o
	ar rcs $@ $<

ptr_exercise : main.cpp libptr_exercise.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
