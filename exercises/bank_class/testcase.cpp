#include <gtest/gtest.h>
#include "bank.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Make sure everything is installed correctly
TEST(initialize, BasicAssertions) {
    map<string, Account> bank;

    bank["abhi"] = Account("abhi");
    EXPECT_EQ(bank["abhi"].get_balance(), 0);
    bank["bob"] = Account("bob");
    EXPECT_EQ(bank["bob"].get_balance(), 0);
    bank["calvin"]  = Account("calvin");
    EXPECT_EQ(bank["calvin"].get_balance(), 0);
    bank["david"]  = Account("david");
    EXPECT_EQ(bank["david"].get_balance(), 0);
    
}


TEST(deposit, BasicAssertions) {
    map<string, Account> bank;
    bank["abhi"] = Account("abhi");
    bank["bob"] = Account("bob");
    bank["calvin"]  = Account("calvin");
    bank["david"]  = Account("david");
    

    bank["abhi"].deposit(100);
    EXPECT_EQ(bank["abhi"].get_balance(), 100);
    bank["david"].deposit(50);
    EXPECT_EQ(bank["david"].get_balance(), 50);    

}

TEST(withdraw, BasicAssertions) {
    map<string, Account> bank;
    bank["abhi"] = Account("abhi", 100);
    bank["bob"] = Account("bob");
    bank["calvin"]  = Account("calvin");
    bank["david"]  = Account("david", 50);
    

    bank["abhi"].withdraw(20);
    EXPECT_EQ(bank["abhi"].get_balance(), 80);
    bank["abhi"].withdraw(100);
    EXPECT_EQ(bank["abhi"].get_balance(), 80); 

    bank["david"].withdraw(50);
    EXPECT_EQ(bank["david"].get_balance(), 0);     
    bank["david"].withdraw(50);
    EXPECT_EQ(bank["david"].get_balance(), 0);    
}

TEST(transfer, BasicAssertions) {
    map<string, Account> bank;
    bank["abhi"] = Account("abhi", 100);
    bank["bob"] = Account("bob");
    bank["calvin"]  = Account("calvin");
    bank["david"]  = Account("david", 50);
    
    bank["abhi"].transfer_out(bank["david"], 30);
    EXPECT_EQ(bank["abhi"].get_balance(), 70);
    EXPECT_EQ(bank["david"].get_balance(), 80);

    bank["bob"].transfer_out(bank["abhi"], 30);
    EXPECT_EQ(bank["abhi"].get_balance(), 70);
    EXPECT_EQ(bank["bob"].get_balance(), 0);

}