#ifndef BOOK_READER_H
#define BOOK_READER_H

#include "book.h"
#include "reader.h"

class BookReader : public Book, public Reader {
public:
    void print() override; // Перевизначення чисто віртуальної функції
    void read() override;
    ~BookReader() override;
};

#endif // BOOK_READER_H
