#include "book_reader.h"

// Реалізація конструкторів
BookReader::BookReader(const std::string& title, const std::string& author, int year, const std::string& readerName)
        : Book(title, author, year), Reader(readerName) {}

BookReader::BookReader(const BookReader& other)
        : Book(other), Reader(other) {}

BookReader::BookReader(BookReader&& other) noexcept
        : Book(std::move(other)), Reader(std::move(other)) {}

// Реалізація оператора присвоєння
BookReader& BookReader::operator=(const BookReader& other) {
    if (this != &other) {
        static_cast<Book&>(*this) = other;
        static_cast<Reader&>(*this) = other;
    }
    return *this;
}

BookReader& BookReader::operator=(BookReader&& other) noexcept {
    if (this != &other) {
        static_cast<Book&>(*this) = std::move(other);
        static_cast<Reader&>(*this) = std::move(other);
    }
    return *this;
}

// Реалізація додаткового методу
std::string BookReader::getReaderName() const {
    return Reader::getName();
}
