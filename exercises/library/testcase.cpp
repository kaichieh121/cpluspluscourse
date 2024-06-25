#include <gtest/gtest.h>
#include "library.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Make sure everything is installed correctly
TEST(initialize, BasicAssertions) {
    // Library inventory
    string titles[10];
    bool statuses[10];
    int book_count = 0;
    EXPECT_EQ(book_count, 0);
}

TEST(add, BasicAssertions) {
    // Library inventory
    string titles[10];
    bool statuses[10] = {0};
    int book_count = 0;

    string book1_title = "The Great Gatsby";
    addBook(titles, statuses, book1_title, book_count);

    EXPECT_EQ(titles[0], "The Great Gatsby");
    EXPECT_FALSE(statuses[0]);
    EXPECT_EQ(book_count, 1);

    string book2_title = "1984";
    addBook(titles, statuses, book2_title, book_count);

    EXPECT_EQ(titles[1], "1984");
    EXPECT_FALSE(statuses[1]);
    EXPECT_EQ(book_count, 2);

    string book3_title = "To Kill a Mockingbird";
    addBook(titles, statuses, book3_title, book_count);

    EXPECT_EQ(titles[2], "To Kill a Mockingbird");
    EXPECT_FALSE(statuses[2]);
    EXPECT_EQ(book_count, 3);
}

TEST(findindex, BasicAssertions) {
    // Library inventory
    string titles[10];
    bool statuses[10] = {0};
    int book_count = 0;

    string book1_title = "The Great Gatsby";
    addBook(titles, statuses, book1_title, book_count);
    string book2_title = "1984";
    addBook(titles, statuses, book2_title, book_count);
    string book3_title = "To Kill a Mockingbird";
    addBook(titles, statuses, book3_title, book_count);

    int index;
    index = findBookIndex(titles, book_count, "The Great Gatsby");
    EXPECT_EQ(index, 0);
    index = findBookIndex(titles, book_count, "1984");
    EXPECT_EQ(index, 1);
    index = findBookIndex(titles, book_count, "To Kill a Mockingbird");
    EXPECT_EQ(index, 2);
}


TEST(borrow, BasicAssertions) {
    // Library inventory
    string titles[10];
    bool statuses[10] = {0};
    int book_count = 0;

    string book1_title = "The Great Gatsby";
    addBook(titles, statuses, book1_title, book_count);
    string book2_title = "1984";
    addBook(titles, statuses, book2_title, book_count);
    string book3_title = "To Kill a Mockingbird";
    addBook(titles, statuses, book3_title, book_count);

    EXPECT_FALSE(statuses[0]);
    borrowBook(statuses[0]);
    EXPECT_TRUE(statuses[0]);

    EXPECT_FALSE(statuses[2]);
    borrowBook(statuses[2]);
    EXPECT_TRUE(statuses[2]);

    EXPECT_FALSE(statuses[1]);
    borrowBook(statuses[1]);
    EXPECT_TRUE(statuses[1]);

    borrowBook(statuses[1]);
    EXPECT_TRUE(statuses[1]);
}

TEST(return, BasicAssertions) {
    // Library inventory
    string titles[10];
    bool statuses[10] = {0};
    int book_count = 0;

    string book1_title = "The Great Gatsby";
    addBook(titles, statuses, book1_title, book_count);
    string book2_title = "1984";
    addBook(titles, statuses, book2_title, book_count);
    string book3_title = "To Kill a Mockingbird";
    addBook(titles, statuses, book3_title, book_count);

    EXPECT_FALSE(statuses[0]);
    borrowBook(statuses[0]);
    EXPECT_TRUE(statuses[0]);

    returnBook(statuses[1]);
    EXPECT_FALSE(statuses[1]);

    EXPECT_FALSE(statuses[2]);
    borrowBook(statuses[2]);
    EXPECT_TRUE(statuses[2]);

    returnBook(statuses[2]);
    EXPECT_FALSE(statuses[2]);
}

