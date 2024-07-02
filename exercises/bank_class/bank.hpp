#pragma once

#include <string>
#include <map>

#define MAX_ACCOUNT 10

using namespace std;


/*
Let's define an account class
*/
class Account{
private:
    double balance;
    string name;
public:
    // default constructor implemented for you
    Account(): balance(0), name("empty"){};
    // paramaterized constructor
    Account(string n, double money=0);

    // member functions
    void deposit(double money);
    bool withdraw(double money);
    bool transfer_out(Account& other_account, double money);

};


void print_bank(map<string,Account>);


