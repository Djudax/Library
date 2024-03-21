#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int pages;
    static int totalCount;

public:
    Book(std::string _title, std::string _author, int _pages);
    Book(const Book& other);
    Book(Book&& other) noexcept;
    ~Book();
    void getInfo() const;
    static int getTotalCount();
    Book operator-() const;
    Book operator+(const Book& other) const;
    friend std::istream& operator>>(std::istream& input, Book& book);
    friend std::ostream& operator<<(std::ostream& output, const Book& book);
};

#endif // BOOK_H
