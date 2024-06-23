#include "passby.hpp"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;
int main(){
  /*
  Exercise:
  Modify 3 functions to increment i. 
  Output should be 5, 6, 7
  */

  int i = 5;

  increment_value(i);
  cout << "i after incrementing by value: " << i << endl;

  increment_ptr(i);
  cout << "i after incrementing by pointer: " << i << endl;

  increment_ref(i);
  cout << "i after incrementing by reference: " << i << endl;


  /*
  implement the swap functions
  */
  // int a = 2;
  // int b = 10;
  // swap_value(a, b);
  // cout << "after swap a: " << a << " b: " << b << endl;

  // swap_ptr(a, b);
  // cout << "after swap a: " << a << " b: " << b << endl;

  // swap_ref(a, b);
  // cout << "after swap a: " << a << " b: " << b << endl;

  return 0;
}