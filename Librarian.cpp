#include "Librarian.h"
#include <iostream>


Librarian::Librarian(string _name) : name(_name) {}

Librarian::Librarian() : name("") {}

Librarian::~Librarian() {}

void Librarian::greet() {
    cout << "Hello! My name is " << name << ", how can I help you?" << endl;
}












