#include "Reader.h"
#include <iostream>
#include <string>

using namespace std;


Reader::Reader(string _name, int _age) : name(_name), age(_age) {}

Reader::Reader() : name(""), age(0) {}

Reader::~Reader() {}

void Reader::borrowBook(Book book) {
    borrowedBooks.push_back(book);
}



    void Reader::listBorrowedBooks() {
        cout << "Borrowed Books: " << endl;
        for (int i = 0; i < borrowedBooks.size(); i++) {
            cout << (i + 1) << ". ";
            borrowedBooks[i].getInfo();
            cout << endl;
        }
    }


