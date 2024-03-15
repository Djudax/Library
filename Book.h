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
    // Конструктори
    Book(std::string _title, std::string _author, int _pages);
    Book(const Book& other);
    Book(Book&& other) noexcept;

    // Деструктор
    ~Book();

    // Методи
    void getInfo() const;
    static void showTotalCount();

    // Перевантаження операторів
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    friend std::istream& operator>>(std::istream& is, Book& book);
};

#endif // BOOK_H
