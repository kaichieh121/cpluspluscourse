#include "bank.hpp"
#include <iostream>
#include <string>
#include <algorithm>



using namespace std;

int main(){
  string account_ptr[MAX_ACCOUNT];
  int balance_ptr[MAX_ACCOUNT];
  fill_n(balance_ptr, MAX_ACCOUNT, -1);
  fill_n(account_ptr, MAX_ACCOUNT, "empty");

  create_account(account_ptr, balance_ptr, "abhi");
  create_account(account_ptr, balance_ptr, "bob");
  create_account(account_ptr, balance_ptr, "calvin");
  create_account(account_ptr, balance_ptr, "david");
  
  deposit(account_ptr, balance_ptr, "abhi", 100); //abhi 100
  withdraw(account_ptr, balance_ptr, "abhi", 20); //abhi 80
  deposit(account_ptr, balance_ptr, "david", 50); //abhi 80, david 50
  transfer(account_ptr, balance_ptr, "abhi", "david", 30); //abhi 50, david 80
  transfer(account_ptr, balance_ptr, "bob", "abhi", 30); //error message (bob has insufficient funds)
  withdraw(account_ptr, balance_ptr, "abhi", 60); //error message (abhi has insufficient funds)

  deposit(account_ptr, balance_ptr, "jeff", 100); //error message (no account found)
  withdraw(account_ptr, balance_ptr, "jeff", 20); //error message (no account found)
  transfer(account_ptr, balance_ptr, "jeff", "david", 30); //error message (no account found)
  transfer(account_ptr, balance_ptr, "abhi", "jeff", 30); //error message (no account found)


  print_bank(account_ptr, balance_ptr);

  return 0;
}