#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "Reader.h"

class Library {
private:
    std::string name;
    std::vector<Book> collection;

public:
    Library(std::string _name);
    void addBook(const Book& book);
    void lendBook(Reader reader, const Book& book);
    void listBooks() const;
};

#endif // LIBRARY_H
