#include <iostream>
#include <string>
#include <vector>
#include "Librarian.h"
#include "Reader.h"

using namespace std;


int main() {
    Book book1("Harry Poter", "J.K", 200);
    Book book2("Financier", "T.D", 731);


    Reader reader("Anton", 18);
    reader.borrowBook(book1);
    reader.borrowBook(book2);
    reader.listBorrowedBooks();

    Librarian librarian("Alisa");
    librarian.greet();







    return 0;
}
