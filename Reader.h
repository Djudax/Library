#ifndef READER_H
#define READER_H

#include <string>
#include <vector>
#include "Book.h"

class Reader {
private:
    std::string name;
    int age;
    std::vector<Book> borrowedBooks;

public:
    // Конструктори
    Reader(std::string _name, int _age);
    Reader();

    // Деструктор
    ~Reader();

    // Методи
    void borrowBook(Book book);
    void listBorrowedBooks();
};

#endif // READER_H

