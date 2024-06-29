all: libstruct_exercise.a struct_exercise

solution: all

clean:
	rm -f *.o *.a *.so struct_exercise *~ callgrind.out.*

struct_exercise.o: struct_exercise.cpp struct_exercise.hpp
	$(CXX) --std=c++20 -c -g -Wall -Wextra -o $@ $<

libstruct_exercise.a: struct_exercise.o
	ar rcs $@ $<

struct_exercise : main.cpp libstruct_exercise.a
	$(CXX) --std=c++20 -g -Wall -Wextra -o $@ $^
