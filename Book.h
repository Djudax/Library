#ifndef BOOK_H
#define BOOK_H

class Book {
public:
    virtual void print() = 0; // Чисто віртуальна функція
    virtual void open() = 0;
    virtual ~Book();
};

#endif // BOOK_H
