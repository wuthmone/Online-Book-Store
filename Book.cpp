#include "Book.hpp"
#include <iostream>
#include <fstream>
using namespace std;
Book :: Book()
{

}

void Book:: setInfo (int id, string title , double price, int quan , string author, string publisher, int isbn)
{
    this -> id = id;
    this -> title = title;
    this -> price = price;
    this -> quan = quan;
    this -> author = author;
    this -> publisher = publisher;
    this -> isbn = isbn;
}
void Book :: getInfo ()
{

        cout << "ID        : " << id << endl;
        cout << "Title     : " << title << endl;
        cout << "Price     : " << price << " RM" << endl;
        cout << "Quanity   : " << quan << endl;
        cout << "Author    : " << author << endl;
        cout << "Publisher : " << publisher << endl;
        cout << "ISBN      : " << isbn << endl;
        cout << endl;
}
void Book:: removedBook (vector<Book> &a, int i)
{
     a.erase (a.begin()+(i-1));
}
void Book:: sortBook (vector<Book>& b )
{
    sort(b.begin(),b.end(),sortByTitle<Book>());
}

