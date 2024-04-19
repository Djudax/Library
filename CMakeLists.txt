cmake_minimum_required(VERSION 3.26)
project(__2)

set(CMAKE_CXX_STANDARD 17)

add_executable(__2 main.cpp
        Reader.cpp
        Reader.h
        Librarian.cpp
        Librarian.h
        Book.cpp
        "../Лаба ООП 2/Book.h"
        book_reader.cpp
        book_reader.h
        book_librarian.cpp
        book_librarian.h)
