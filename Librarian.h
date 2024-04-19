#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>

class Librarian {
private:
    std::string name;

public:
    Librarian(const std::string& name);
    std::string getName() const;
};

#endif // LIBRARIAN_H
