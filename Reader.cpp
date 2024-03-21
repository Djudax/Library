#include "Reader.h"
#include <iostream>

Reader::Reader(std::string _name, int _age) : name(_name), age(_age) {}

Reader::Reader() : name(""), age(0) {}

Reader::~Reader() {}

void Reader::borrowBook(Book book) {
    borrowedBooks.push_back(book);
}

void Reader::listBorrowedBooks() {
    std::cout << "Borrowed Books: " << std::endl;
    for (int i = 0; i < borrowedBooks.size(); i++) {
        std::cout << (i + 1) << ". " << borrowedBooks[i];
        std::cout << std::endl;
    }
}
