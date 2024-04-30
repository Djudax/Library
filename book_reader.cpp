#include "book_reader.h"
#include <iostream>

void BookReader::print() {
    std::cout << "BookReader printed" << std::endl;
}

void BookReader::read() {
    std::cout << "BookReader reading" << std::endl;
}

BookReader::~BookReader() {
    std::cout << "BookReader destroyed" << std::endl;
}
