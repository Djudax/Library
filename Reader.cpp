#include "Reader.h"
#include <iostream>

// Конструктор
Reader::Reader(std::string _name, int _age) : name(_name), age(_age) {}

// Конструктор за замовчуванням
Reader::Reader() : name(""), age(0) {}

// Деструктор
Reader::~Reader() {}

// Метод видачі книги читачу
void Reader::borrowBook(Book book) {
    borrowedBooks.push_back(book);
}

// Метод виведення списку позичених книг
void Reader::listBorrowedBooks() {
    std::cout << "Borrowed Books: " << std::endl;
    for (int i = 0; i < borrowedBooks.size(); i++) {
        std::cout << (i + 1) << ". " << borrowedBooks[i];
        std::cout << std::endl;
    }
}
