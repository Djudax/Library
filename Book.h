
#include <iostream>
#ifndef __2_BOOK_H
#define __2_BOOK_H
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    Book(string _title, string _author, int _pages);

    ~Book();
    void getInfo();

};



#endif //__2_BOOK_H
