#include "Librarian.h"

// Конструктор
Librarian::Librarian(std::string _name) : name(_name) {}

// Конструктор за замовчуванням
Librarian::Librarian() : name("") {}

// Деструктор
Librarian::~Librarian() {}

// Метод привітання
void Librarian::greet() {
    std::cout << "Hello! My name is " << name << ", how can I help you?" << std::endl;
}













