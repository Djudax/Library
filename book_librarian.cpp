#include "book_librarian.h"
#include <iostream>

void BookLibrarian::print() {
    std::cout << "BookLibrarian printed" << std::endl;
}

void BookLibrarian::manage() {
    std::cout << "BookLibrarian managing" << std::endl;
}

BookLibrarian::~BookLibrarian() {
    std::cout << "BookLibrarian destroyed" << std::endl;
}
