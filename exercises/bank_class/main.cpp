#include "bank.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

  map<string, Account> bank;

  bank["abhi"] = Account("abhi");
  bank["bob"] = Account("bob");
  bank["calvin"]  = Account("calvin");
  bank["david"]  = Account("david");
  
  bank["abhi"].deposit(100); //abhi 100
  bank["abhi"].withdraw(20); //abhi 80
  bank["david"].deposit(50); //abhi 80, david 50
  bank["abhi"].transfer_out(bank["david"], 30); //abhi 50, david 80
  bank["bob"].transfer_out(bank["abhi"], 10); //error message (bob has insufficient funds)
  bank["abhi"].withdraw(60); //error message (abhi has insufficient funds)


  print_bank(bank);

  return 0;
}