#include "librarian.h"
#include <iostream>

void Librarian::manage() {
    std::cout << "Librarian managing" << std::endl;
}

Librarian::~Librarian() {
    std::cout << "Librarian destroyed" << std::endl;
}
