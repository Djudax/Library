#include "Librarian.h"

Librarian::Librarian(const std::string& name) : name(name) {}

std::string Librarian::getName() const {
    return name;
}
