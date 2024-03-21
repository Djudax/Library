#include <iostream>
#include "Book.h"
#include "Reader.h"
#include "Librarian.h"
#include "Library.h"

int main() {
    Book book1("Harry Potter", "J.K. Rowling", 200);
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 180);

    Reader reader("John", 25);
    Librarian librarian("Alice");
    Library library("Central Library");

    librarian.greet();

    library.addBook(book1);
    library.addBook(book2);

    library.lendBook(reader, book1);
    library.lendBook(reader, book2);

    library.listBooks();

    return 0;
}
