#include <string>
#include <iostream>
#include "Book.h"

Book::Book(string _title, string _author, int _pages) : title(_title), author(_author), pages(_pages) {}



Book::~Book() {}

void Book::getInfo() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}





