#include "Order.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;


Order :: Order ()
{

}
void Order :: getQuan(int quan)
{
    this -> quan = quan;
}
double Order:: totalPrice()
{
    double totalPrice;
   return  totalPrice = price*quan;
}
void Order:: getItemInfo()
{
    cout.width(7);
    cout<< id << "|";
    cout.width(33);
    cout<<title << setw(4)<<"|";
    cout.width(10);
    cout<<quan<< "|"  ;
    cout.width(10);
    cout<<price << " RM";
    cout<< endl;

}
void Order:: getItemInfoOrder()
{
    cout.width(7);
    cout<< id << "|";
    cout.width(33);
    cout<<title << setw(4)<<"|";
    cout.width(10);
    cout<<quan<< "|"  ;
    cout.width(4);
    cout<<price << " RM |";
    cout.width(10);
    cout<< price*quan <<"RM |";
    cout<< endl;

}

