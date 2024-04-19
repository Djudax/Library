#include "Reader.h"

Reader::Reader(const std::string& name) : name(name) {}

std::string Reader::getName() const {
    return name;
}
