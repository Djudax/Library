#ifndef BOOK_READER_H
#define BOOK_READER_H

#include "../Лаба ООП 2/Book.h"
#include "Reader.h"

class BookReader : public Book, public Reader {
public:
    // Конструктори
    BookReader(const std::string& title, const std::string& author, int year, const std::string& readerName);
    BookReader(const BookReader& other); // Copy конструктор
    BookReader(BookReader&& other) noexcept; // Move конструктор

    // Оператор присвоєння
    BookReader& operator=(const BookReader& other);
    BookReader& operator=(BookReader&& other) noexcept;

    // Додатковий метод
    std::string getReaderName() const;
};

#endif // BOOK_READER_H
