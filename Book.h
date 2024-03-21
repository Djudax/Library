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
    Book(const Book& other);  // Конструктор копіювання
    Book(Book&& other) noexcept;  // Конструктор переміщення
    ~Book();
    void getInfo() const;
    static int getTotalCount();
    Book operator-() const;  // Унарний оператор "-"
    Book operator+(const Book& other) const;  // Бінарний оператор "+"
    friend std::istream& operator>>(std::istream& input, Book& book);  // Дружня функція operator>>
    friend std::ostream& operator<<(std::ostream& output, const Book& book);  // Дружня функція operator<<
};

#endif // BOOK_H
