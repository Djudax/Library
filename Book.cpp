#include "Book.h"

int Book::totalCount = 0;

// Конструктор
Book::Book(std::string _title, std::string _author, int _pages) : title(_title), author(_author), pages(_pages) {
    totalCount++;
}

// Конструктор копіювання
Book::Book(const Book& other) : title(other.title), author(other.author), pages(other.pages) {
    totalCount++;
}

// Конструктор переміщення
Book::Book(Book&& other) noexcept : title(std::move(other.title)), author(std::move(other.author)), pages(std::move(other.pages)) {
    totalCount++;
}

// Деструктор
Book::~Book() {
    totalCount--;
}

// Метод виведення інформації
void Book::getInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Pages: " << pages << std::endl;
}

// Статичний метод виведення загальної кількості книг
void Book::showTotalCount() {
    std::cout << "Total count of books: " << totalCount << std::endl;
}

// Перевантаження оператора виведення в потік
std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << std::endl;
    os << "Author: " << book.author << std::endl;
    os << "Pages: " << book.pages << std::endl;
    return os;
}

// Перевантаження оператора вводу з потоку
std::istream& operator>>(std::istream& is, Book& book) {
    std::cout << "Enter title: ";
    std::getline(is, book.title);
    std::cout << "Enter author: ";
    std::getline(is, book.author);
    std::cout << "Enter number of pages: ";
    is >> book.pages;
    return is;
}
