#pragma once

void printHello(int i);

/*
TODO: write a function called is_odd(), which determines whether the given integer n is even or odd
input: integer n,
output: bool
*/
bool is_odd(int n);

/*
TODO: write a function called print_even_square(). The function loops through int_array, if
an element is even, print the square of that number. 
e.g. 
    n=5, int_array=[0,1,2,3,4]
    output: 0, 4, 16
input: 
    int n: size of int_array
    int* int_array: pointer to int_array
output: NA
*/
void print_even_square(int n, int* int_array);
void create_new_text();