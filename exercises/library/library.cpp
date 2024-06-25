#include "library.hpp"

#include <iostream>

using namespace std;


// Function to borrow a book
// is_borrowed is a booleon (aka one element of the statuses array)
// false means book is available, true means borrowed
// this function modifies this booleon value
void borrowBook(bool &is_borrowed) {
  return;
}

// Function to return a book
// is_borrowed is a booleon (aka one element of the statuses array)
// false means book is available, true means borrowed
// this function modifies this booleon value
void returnBook(bool &is_borrowed) {
  return;
}

// Function to add a book to the library inventory
// adds a book to the titles array
// set the status to be "available" (aka false)
// increase book_count
void addBook(std::string (&titles)[10], bool (&statuses)[10], const std::string &title, int &book_count) {
  return;
}

// Function to list the books in the library inventory
void listBooks(const std::string (&titles)[10], const bool (&statuses)[10], int book_count) {
    for (int i = 0; i < book_count; i++) {
        std::cout << "Book: \"" << titles[i] << "\", Status: " << (statuses[i] ? "Borrowed" : "Available") << std::endl;
    }
}

// Function to find the index of a book in the library inventory
// loop through the number of books
// find the index of given book in titles[10]
// if found, return the index
// else, return -1
int findBookIndex(const std::string (&titles)[10], int book_count, const std::string &title) {
  return -1;
}