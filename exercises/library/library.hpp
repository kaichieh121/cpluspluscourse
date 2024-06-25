#pragma once

#include <string>

using namespace std;

void borrowBook(bool &is_borrowed);
void returnBook(bool &is_borrowed);

void addBook(string (&titles)[10], bool (&statuses)[10], const string &title, int &book_count);
void listBooks(const string (&titles)[10], const bool (&statuses)[10], int book_count);
int findBookIndex(const string (&titles)[10], int book_count, const string &title);