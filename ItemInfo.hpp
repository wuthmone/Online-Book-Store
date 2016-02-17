#ifndef ITEMINFO_HPP
#define ITEMINFO_HPP
#include <string>
#include <algorithm>
using namespace std;

class ItemInfo{
    protected:
        int id;
        string title;
        double price;
        int quan ;
    public :
        ItemInfo ();
        ItemInfo(int id, string title, double price, int quan ) :
            id(id), title (title), price (price), quan(quan) {}
    double setPrice (double price);
    int setQuan (int quan ) ;
    string getTitle();
    int getId();



};

template <typename T>
class sortByTitle{
    public:
  bool operator()(T b1, T b2 )
  {
    if (b1.getTitle()== b2.getTitle())
        return b1.getId()< b2.getId();
    else
        return b1.getTitle()< b2.getTitle();
  }

};


#endif // ITEMINFO_HPP

