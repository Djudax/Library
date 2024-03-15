#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include <iostream>

class Librarian {
private:
    std::string name;

public:
    // Конструктори
    Librarian(std::string _name);
    Librarian();

    // Деструктор
    ~Librarian();

    // Метод
    void greet();
};

#endif // LIBRARIAN_H

