#include "reader.h"
#include <iostream>

void Reader::read() {
    std::cout << "Reader reading" << std::endl;
}

Reader::~Reader() {
    std::cout << "Reader destroyed" << std::endl;
}
