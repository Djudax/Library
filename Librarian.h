#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include <iostream>

class Librarian {
private:
    std::string name;

public:
    Librarian(std::string _name);
    Librarian();
    ~Librarian();
    void greet();
};

#endif // LIBRARIAN_H
