#include "bank.hpp"

#include <iostream>

using namespace std;


int name2id(string* account_ptr, string name){
  /*
  find the index of a specific account given by name

  Param:
    account_ptr: a string array storing all the account names
    name: name of the account
  Return:
    index of the account (-1 if not found)

  *HINT* macro variable MAX_ACCOUNT represents the length of array
  */

  return -1;
}


bool create_account(string* account_ptr, int* balance_ptr, string name){
  /*
  initialize the account in the account array and balance array
  - put name into an empty account array cell (indicated by the string "empty")
  - initialize balance of the according cell to be 0

  Param:
    account_ptr: a string array storing all the account names
    balance_ptr: a int array storing all the balance
    name: name of the account
  Return:
    true if account creation succeeds
    false if account creation fails (if reaches MAX_ACCOUNT)

  *HINT* macro variable MAX_ACCOUNT represents the length of array
  */

  return false;
}

bool deposit(string* account_ptr, int* balance_ptr, string name, int amount){
  /* 
  deposit money into a given account. 
  you may not deposit into an account that does not exist

  Param:
    account_ptr: a string array storing all the account names
    balance_ptr: a int array storing all the balance
    name: name of the account
    amount: amount to deposit
  Return:
    boolean indicating whether deposit succeeds

  *HINT* use name2id function to get the ptr offset (aka array index)
  */
  return false;
}

bool withdraw(string* account_ptr, int* balance_ptr, string name, int amount){
  /*
  withdraw money from a given account
  you cannot withdraw from an account that does not exist
  you cannot have negative balance

  Param:
    account_ptr: a string array storing all the account names
    balance_ptr: a int array storing all the balance
    name: name of the account
    amount: amount to withdraw
  
  Return:
    a booleon indicating whether a withdraw was successful

  *HINT* use name2id function to get the ptr offset (aka array index)
  */
  return false;
}

bool transfer(string* account_ptr, int* balance_ptr, string from, string to, int amount){
  /*
  transfer money from one account to another. 

  Param:
    account_ptr: a string array storing all the account names
    balance_ptr: a int array storing all the balance
    from: name of the account to withdraw from
    to: name of the account to deposit into
    amount: amount to transfer

  *HINT* use the withdraw and deposit function
  */
  return false;
}



void print_bank(string* account_ptr, int* balance_ptr){
  cout << "name\t" << "balance" << endl;
  for(int i=0; i<MAX_ACCOUNT; ++i){
    cout << *(account_ptr + i) << "\t" << *(balance_ptr + i) << endl;
  }
}