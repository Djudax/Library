#include <iostream>
#include "Book.h"
#include "Librarian.h"
#include "Reader.h"

int main() {
    // Створення об'єктів книг
    Book book1("Harry Potter", "J.K", 200);
    Book book2("Financier", "T.D", 731);

    // Створення об'єкта читача
    Reader reader("Anton", 18);
    reader.borrowBook(book1);
    reader.borrowBook(book2);
    reader.listBorrowedBooks();

    // Створення об'єкта бібліотекаря
    Librarian librarian("Alisa");
    librarian.greet();

    // Показ загальної кількості книг
    Book::showTotalCount();

    return 0;
}
