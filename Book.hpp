#ifndef BOOK_HPP
#define BOOK_HPP
#include "ItemInfo.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Book : virtual public ItemInfo {
    string author;
    string publisher;
    int isbn ;
public:
    Book();
    Book(int id, string title , double price, int quan , string author, string publisher, int isbn):
        ItemInfo(id, title, price, quan), author(author), publisher(publisher), isbn(isbn) {}

    void setInfo (int id, string title , double price, int quan , string author, string publisher, int isbn);
    void getInfo ();
    void removedBook (vector<Book> &a, int i);
    void sortBook (vector<Book>& b );
};
#endif // BOOK_HPP

