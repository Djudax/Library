#ifndef READER_H
#define READER_H

#include <string>

class Reader {
private:
    std::string name;

public:
    Reader(const std::string& name);
    std::string getName() const;
};

#endif // READER_H
