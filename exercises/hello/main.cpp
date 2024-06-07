#include "hello.hpp"
#include <iostream>
using namespace std;

int main() {
  int n = 3;
  for (int i = 0; i < n; i++) {
    printHello(i);
  }

  n = 10;
  for (int i = 0; i < n; i++) {
    if(is_odd(i)){
      cout << i << " is odd" << endl;
    } else{
      cout << i << " is even" << endl;
    }
  }

  int myarray[] = {0, 1, 2, 3, 4};
  print_even_square(5, myarray);

  return 0;
}
