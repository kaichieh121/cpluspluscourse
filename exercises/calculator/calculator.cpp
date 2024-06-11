#include "calculator.hpp"

#include <iostream>
#include <array>
#include <string>

using namespace std;
// actual operating
int operate(float num1, float num2) {
  char op;
  cout << "enter operation: +, -, *, /, ^";
  cin >> op;
  cout << "enter two numbers";
  cin >> num1 >> num2;

  if(op == '+') {
    cout << num1 + num2 << " is the sum";
  } else if(op == '-') {
    cout << num1 - num2 << " is the difference";
  } else if(op == '*') {
    cout << num1 * num2 << " is the product";
  } else if(op == '/') {
    cout << num1/num2 << " is the quotient";
  } else if(op == '^') {
    int x = num1;
    for(int i = num2; i>1; i--) {
      x = x * num1;
    }
    cout << x << "is the result";
  } else {
    cout << "error";
  }
  return 0;
}

//attempt at exponential function
/*
for(int i = num2; i>0; i--) {
  num1 = num1*num1
}
cout << num1 << "is the result"




*/