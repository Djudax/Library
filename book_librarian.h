#ifndef BOOK_LIBRARIAN_H
#define BOOK_LIBRARIAN_H

#include "../Лаба ООП 2/Book.h"
#include "Librarian.h"

class BookLibrarian : public Book, public Librarian {
public:
    // Конструктори
    BookLibrarian(const std::string& title, const std::string& author, int year, const std::string& librarianName);
    BookLibrarian(const BookLibrarian& other); // Copy конструктор
    BookLibrarian(BookLibrarian&& other) noexcept; // Move конструктор

    // Оператор присвоєння
    BookLibrarian& operator=(const BookLibrarian& other);
    BookLibrarian& operator=(BookLibrarian&& other) noexcept;

    // Додатковий метод
    std::string getLibrarianName() const;
};

#endif // BOOK_LIBRARIAN_H
