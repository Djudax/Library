#include "Library.h"
#include <iostream>

Library::Library(std::string _name) : name(_name) {}

void Library::addBook(const Book& book) {
    collection.push_back(book);
}

void Library::lendBook(Reader reader, const Book& book) {
    reader.borrowBook(book);
}

void Library::listBooks() const {
    std::cout << "Books in library '" << name << "':" << std::endl;
    for (const Book& book : collection) {
        std::cout << book << std::endl;
    }
}

