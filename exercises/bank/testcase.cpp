#include <gtest/gtest.h>
#include "bank.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Make sure everything is installed correctly
TEST(initialize, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");
    
    for(int i=0; i<MAX_ACCOUNT; ++i){
        EXPECT_EQ(account_ptr[i], "empty");
        EXPECT_EQ(balance_ptr[i], -1);
    }
}

TEST(create, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");

    create_account(account_ptr, balance_ptr, "abhi");
    create_account(account_ptr, balance_ptr, "bob");
    create_account(account_ptr, balance_ptr, "calvin");
    create_account(account_ptr, balance_ptr, "david");
    

    EXPECT_EQ(account_ptr[0], "abhi");
    EXPECT_EQ(balance_ptr[0], 0);
    EXPECT_EQ(account_ptr[1], "bob");
    EXPECT_EQ(balance_ptr[1], 0);
    EXPECT_EQ(account_ptr[2], "calvin");
    EXPECT_EQ(balance_ptr[2], 0);
    EXPECT_EQ(account_ptr[3], "david");
    EXPECT_EQ(balance_ptr[3], 0);

    for(int i=4; i<MAX_ACCOUNT; ++i){
        EXPECT_EQ(account_ptr[i], "empty");
        EXPECT_EQ(balance_ptr[i], -1);
    }
    // print_bank(account_ptr, balance_ptr);
}

TEST(createMAX, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");

    bool flag;
    flag = create_account(account_ptr, balance_ptr, "abhi");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "bob");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "calvin");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "david");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "e");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "f");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "g");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "h");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "i");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "j");
    EXPECT_TRUE(flag);
    flag = create_account(account_ptr, balance_ptr, "k");
    EXPECT_FALSE(flag);
    

    EXPECT_EQ(account_ptr[0], "abhi");
    EXPECT_EQ(balance_ptr[0], 0);
    EXPECT_EQ(account_ptr[1], "bob");
    EXPECT_EQ(balance_ptr[1], 0);
    EXPECT_EQ(account_ptr[2], "calvin");
    EXPECT_EQ(balance_ptr[2], 0);
    EXPECT_EQ(account_ptr[3], "david");
    EXPECT_EQ(balance_ptr[3], 0);
    EXPECT_EQ(account_ptr[4], "e");
    EXPECT_EQ(balance_ptr[4], 0);
    EXPECT_EQ(account_ptr[5], "f");
    EXPECT_EQ(balance_ptr[5], 0);
    EXPECT_EQ(account_ptr[6], "g");
    EXPECT_EQ(balance_ptr[6], 0);
    EXPECT_EQ(account_ptr[7], "h");
    EXPECT_EQ(balance_ptr[7], 0);
    EXPECT_EQ(account_ptr[8], "i");
    EXPECT_EQ(balance_ptr[8], 0);
    EXPECT_EQ(account_ptr[9], "j");
    EXPECT_EQ(balance_ptr[9], 0);
    print_bank(account_ptr, balance_ptr);
}

TEST(deposit, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");

    create_account(account_ptr, balance_ptr, "abhi");
    create_account(account_ptr, balance_ptr, "bob");
    create_account(account_ptr, balance_ptr, "calvin");
    create_account(account_ptr, balance_ptr, "david");

    bool abhi = deposit(account_ptr, balance_ptr, "abhi", 100); //abhi 100
    bool david = deposit(account_ptr, balance_ptr, "david", 50); //david 50
    bool jeff = deposit(account_ptr, balance_ptr, "jeff", 100); //fail
    
    EXPECT_TRUE(abhi);
    EXPECT_TRUE(david);
    EXPECT_FALSE(jeff);

    EXPECT_EQ(account_ptr[0], "abhi");
    EXPECT_EQ(balance_ptr[0], 100);
    EXPECT_EQ(account_ptr[1], "bob");
    EXPECT_EQ(balance_ptr[1], 0);
    EXPECT_EQ(account_ptr[2], "calvin");
    EXPECT_EQ(balance_ptr[2], 0);
    EXPECT_EQ(account_ptr[3], "david");
    EXPECT_EQ(balance_ptr[3], 50);

    for(int i=4; i<MAX_ACCOUNT; ++i){
        EXPECT_EQ(account_ptr[i], "empty");
        EXPECT_EQ(balance_ptr[i], -1);
    }
    // print_bank(account_ptr, balance_ptr);
}

TEST(withdraw, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");

    create_account(account_ptr, balance_ptr, "abhi");
    create_account(account_ptr, balance_ptr, "bob");
    create_account(account_ptr, balance_ptr, "calvin");
    create_account(account_ptr, balance_ptr, "david");

    deposit(account_ptr, balance_ptr, "abhi", 100); //abhi 100
    bool abhi = withdraw(account_ptr, balance_ptr, "abhi", 20); //abhi 80
    EXPECT_TRUE(abhi);
    abhi = withdraw(account_ptr, balance_ptr, "abhi", 100); //error message (abhi has insufficient funds)
    EXPECT_FALSE(abhi);
    bool jeff = withdraw(account_ptr, balance_ptr, "jeff", 20); //fail cuz no account
    EXPECT_FALSE(jeff);

    EXPECT_EQ(account_ptr[0], "abhi");
    EXPECT_EQ(balance_ptr[0], 80);
    EXPECT_EQ(account_ptr[1], "bob");
    EXPECT_EQ(balance_ptr[1], 0);
    EXPECT_EQ(account_ptr[2], "calvin");
    EXPECT_EQ(balance_ptr[2], 0);
    EXPECT_EQ(account_ptr[3], "david");
    EXPECT_EQ(balance_ptr[3], 0);

    for(int i=4; i<MAX_ACCOUNT; ++i){
        EXPECT_EQ(account_ptr[i], "empty");
        EXPECT_EQ(balance_ptr[i], -1);
    }
    // print_bank(account_ptr, balance_ptr);
}

TEST(transfer, BasicAssertions) {
    string account_ptr[MAX_ACCOUNT];
    int balance_ptr[MAX_ACCOUNT];
    fill_n(balance_ptr, MAX_ACCOUNT, -1);
    fill_n(account_ptr, MAX_ACCOUNT, "empty");

    create_account(account_ptr, balance_ptr, "abhi");
    create_account(account_ptr, balance_ptr, "bob");
    create_account(account_ptr, balance_ptr, "calvin");
    create_account(account_ptr, balance_ptr, "david");
    
    bool flag;
    flag = deposit(account_ptr, balance_ptr, "abhi", 80); //abhi 100
    EXPECT_TRUE(flag);
    flag = deposit(account_ptr, balance_ptr, "david", 50); //abhi 80, david 50
    EXPECT_TRUE(flag);
    flag = transfer(account_ptr, balance_ptr, "abhi", "david", 30); //abhi 50, david 80
    EXPECT_TRUE(flag);
    flag = transfer(account_ptr, balance_ptr, "bob", "abhi", 30); //error message (bob has insufficient funds)
    EXPECT_FALSE(flag);

    flag = transfer(account_ptr, balance_ptr, "jeff", "david", 30); //error message (no account found)
    EXPECT_FALSE(flag);
    flag = transfer(account_ptr, balance_ptr, "abhi", "jeff", 30); //error message (no account found)
    EXPECT_FALSE(flag);

    EXPECT_EQ(account_ptr[0], "abhi");
    EXPECT_EQ(balance_ptr[0], 50);
    EXPECT_EQ(account_ptr[1], "bob");
    EXPECT_EQ(balance_ptr[1], 0);
    EXPECT_EQ(account_ptr[2], "calvin");
    EXPECT_EQ(balance_ptr[2], 0);
    EXPECT_EQ(account_ptr[3], "david");
    EXPECT_EQ(balance_ptr[3], 80);

    for(int i=4; i<MAX_ACCOUNT; ++i){
        EXPECT_EQ(account_ptr[i], "empty");
        EXPECT_EQ(balance_ptr[i], -1);
    }
    // print_bank(account_ptr, balance_ptr);
}