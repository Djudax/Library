#include "book_reader.h"
#include "book_librarian.h"
#include <iostream>

int main() {
    // Створення об'єкту BookReader за допомогою конструктора
    BookReader bookReader("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Jane Doe");
    // Виведення даних про книгу та читача
    std::cout << "Book title borrowed by the reader: " << bookReader.getTitle() << std::endl;
    std::cout << "Reader name: " << bookReader.getReaderName() << std::endl;

    // Створення об'єкту BookLibrarian за допомогою конструктора
    BookLibrarian bookLibrarian("Pride and Prejudice", "Jane Austen", 1813, "Bob Smith");
    // Виведення даних про книгу та бібліотекаря
    std::cout << "Book title managed by the librarian: " << bookLibrarian.getTitle() << std::endl;
    std::cout << "Librarian name: " << bookLibrarian.getLibrarianName() << std::endl;

    return 0;
}
