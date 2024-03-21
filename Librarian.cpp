#include "Librarian.h"

Librarian::Librarian(std::string _name) : name(_name) {}

Librarian::Librarian() : name("") {}

Librarian::~Librarian() {}

void Librarian::greet() {
    std::cout << "Hello! My name is " << name << ", how can I help you?" << std::endl;
}




