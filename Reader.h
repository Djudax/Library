

#ifndef __2_READER_H
#define __2_READER_H
#include <string>
#include "Book.h"
#include <vector>

using namespace std;
class Reader {
private:
    string name;
    int age;
    vector<Book> borrowedBooks;

public:
    Reader(string _name, int _age);
    Reader();
    ~Reader();
    void borrowBook(Book book);
    void listBorrowedBooks();
};





#endif //__2_READER_H
