#include <iostream>
#include "Book.h"
#include "Reader.h"
#include "Librarian.h"

int main() {
    // Створення об'єктів книг
    Book book1("Harry Potter", "J.K. Rowling", 200);
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 180);

    // Створення об'єктів читача та бібліотекаря
    Reader reader("John", 25);
    Librarian librarian("Alice");

    // Виведення вітання бібліотекаря
    librarian.greet();

    // Читач бере книги у бібліотеці
    reader.borrowBook(book1);
    reader.borrowBook(book2);

    // Виведення списку взятих книг
    reader.listBorrowedBooks();

    return 0;
}
