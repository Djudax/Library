

#ifndef __2_LIBRARIAN_H
#define __2_LIBRARIAN_H
#include <string>

using namespace std;

class Librarian {
private:
    string name;

public:
    Librarian(string _name);
    Librarian();
    ~Librarian();
    void greet();

};


#endif //__2_LIBRARIAN_H
