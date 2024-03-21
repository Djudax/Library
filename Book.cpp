#include "Book.h"

int Book::totalCount = 0;

Book::Book(std::string _title, std::string _author, int _pages) : title(_title), author(_author), pages(_pages) {
    totalCount++;
}

Book::Book(const Book& other) : title(other.title), author(other.author), pages(other.pages) {
    totalCount++;
}

Book::Book(Book&& other) noexcept : title(std::move(other.title)), author(std::move(other.author)), pages(other.pages) {
    totalCount++;
}

Book::~Book() {
    totalCount--;
}

void Book::getInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Pages: " << pages << std::endl;
}

int Book::getTotalCount() {
    return totalCount;
}

Book Book::operator-() const {
    return Book("-" + title, author, pages);
}

Book Book::operator+(const Book& other) const {
    return Book(title + " + " + other.title, author + " + " + other.author, pages + other.pages);
}

std::istream& operator>>(std::istream& input, Book& book) {
    std::cout << "Enter title: ";
    input >> book.title;
    std::cout << "Enter author: ";
    input >> book.author;
    std::cout << "Enter pages: ";
    input >> book.pages;
    return input;
}

std::ostream& operator<<(std::ostream& output, const Book& book) {
    output << "Title: " << book.title << std::endl;
    output << "Author: " << book.author << std::endl;
    output << "Pages: " << book.pages << std::endl;
    return output;
}
