#include "book_librarian.h"

// Реалізація конструкторів
BookLibrarian::BookLibrarian(const std::string& title, const std::string& author, int year, const std::string& librarianName)
        : Book(title, author, year), Librarian(librarianName) {}

BookLibrarian::BookLibrarian(const BookLibrarian& other)
        : Book(other), Librarian(other) {}

BookLibrarian::BookLibrarian(BookLibrarian&& other) noexcept
        : Book(std::move(other)), Librarian(std::move(other)) {}

// Реалізація оператора присвоєння
BookLibrarian& BookLibrarian::operator=(const BookLibrarian& other) {
    if (this != &other) {
        static_cast<Book&>(*this) = other;
        static_cast<Librarian&>(*this) = other;
    }
    return *this;
}

BookLibrarian& BookLibrarian::operator=(BookLibrarian&& other) noexcept {
    if (this != &other) {
        static_cast<Book&>(*this) = std::move(other);
        static_cast<Librarian&>(*this) = std::move(other);
    }
    return *this;
}

// Реалізація додаткового методу
std::string BookLibrarian::getLibrarianName() const {
    return Librarian::getName();
}
