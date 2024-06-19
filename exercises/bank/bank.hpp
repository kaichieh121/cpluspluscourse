#pragma once

#include <string>

#define MAX_ACCOUNT 10

using namespace std;

bool create_account(string* account_list, int* balance_ptr, string name);

bool deposit(string* account_ptr, int* balance_ptr, string name, int amount);

bool withdraw(string* account_ptr, int* balance_ptr, string name, int amount);

bool transfer(string* account_ptr, int* balance_ptr, string from, string to, int amount);

int name2id(string* account_ptr, string name);

void print_bank(string* account_ptr, int* balance_ptr);