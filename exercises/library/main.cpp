#include "library.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  /*
  titles is an array of string that contains the book names
  statuses is an array of booleon, false means book is available, true means borrowed
  book_count is the number of books in the library right now
  */
  // Library inventory
  string titles[10];
  bool statuses[10];
  int book_count = 0;

  // Initialize books
  string book1_title = "The Great Gatsby";
  addBook(titles, statuses, book1_title, book_count);

  string book2_title = "1984";
  addBook(titles, statuses, book2_title, book_count);

  string book3_title = "To Kill a Mockingbird";
  addBook(titles, statuses, book3_title, book_count);

  // Display initial status of inventory
  cout << "Library Inventory:\n";
  listBooks(titles, statuses, book_count);

  
  int index;

  // Borrow a book
  string book_to_borrow = "1984";
  index = findBookIndex(titles, book_count, book_to_borrow);
  if (index != -1) {
      borrowBook(statuses[index]);
  }

  // Display status of inventory after borrowing
  std::cout << "\nLibrary Inventory:\n";
  listBooks(titles, statuses, book_count);

  // Return a book
  std::string book_to_return = "1984";
  index = findBookIndex(titles, book_count, book_to_return);
  if (index != -1) {
      returnBook(statuses[index]);
  }

  // Display status of inventory after returning
  std::cout << "\nLibrary Inventory:\n";
  listBooks(titles, statuses, book_count);

  return 0;
}