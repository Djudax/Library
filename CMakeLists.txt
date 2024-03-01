cmake_minimum_required(VERSION 3.26)
project(__2)

set(CMAKE_CXX_STANDARD 17)

add_executable(__2 main.cpp
        Book.cpp
        Book.h
        Reader.cpp
        Reader.h
        Librarian.cpp
        Librarian.h)
