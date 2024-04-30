#include "book_reader.h"
#include "book_librarian.h"

int main() {
    // Проблема статичної прив’язки методів (Static Method Binding)
    Book book;
    book.print(); // Виклик методу print з класу Book

    // Використання динамічного поліморфізму з вказівником на базовий клас
    BookReader bookReader;
    BookLibrarian bookLibrarian;

    Book* ptr = &bookReader;
    ptr->print(); // Виклик віртуальної функції print з класу BookReader

    ptr = &bookLibrarian;
    ptr->print(); // Виклик віртуальної функції print з класу BookLibrarian

    // Використання динамічного поліморфізму з посиланням на базовий клас
    Reader& readerRef = bookReader;
    readerRef.read(); // Виклик віртуальної функції read з класу BookReader

    Librarian& librarianRef = bookLibrarian;
    librarianRef.manage(); // Виклик віртуальної функції manage з класу BookLibrarian

    return 0;
}
