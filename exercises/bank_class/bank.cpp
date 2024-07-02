#include "bank.hpp"

#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
Implement the class functions
*/


void print_bank(map<string, Account> bank){
  map<string, Account>::iterator it;
  cout << "account\t" << "balance" << endl;
  for(it = bank.begin(); it != bank.end(); ++it){
    cout << it->first << "\t" << (it->second).get_balance() << endl;
  }
}