#include  "ItemInfo.hpp"
#include <iostream>
using namespace std;
ItemInfo :: ItemInfo()
{

}

double ItemInfo:: setPrice (double price)
{
    this -> price = price ;
     return price;
}
int ItemInfo :: setQuan (int quan )
{
    this -> quan = quan ;
    return quan;
}
string ItemInfo:: getTitle()
{
  return title;
}
int ItemInfo:: getId()
{
 return id;
}





