#ifndef BOOK_LIBRARIAN_H
#define BOOK_LIBRARIAN_H

#include "book.h"
#include "librarian.h"

class BookLibrarian : public Book, public Librarian {
public:
    void print() final;
    void manage() override;
    ~BookLibrarian() override;
};

#endif // BOOK_LIBRARIAN_H
