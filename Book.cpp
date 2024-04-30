#include "book.h"
#include <iostream>

void Book::print() {
    std::cout << "Book printed" << std::endl;
}

void Book::open() {
    std::cout << "Book opened" << std::endl;
}

Book::~Book() {
    std::cout << "Book destroyed" << std::endl;
}

