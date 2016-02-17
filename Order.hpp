#ifndef ORDER_HPP
#define ORDER_HPP
#include <string>
using namespace std;

class Order{
        int id;
        string title;
        double price;
        int quan ;

    public :
        Order ();
        Order(int id, string title, double price, int quan ) :
            id(id), title (title), price (price), quan(quan) {}
        void getItemInfo();
        void getItemInfoOrder();
        void getQuan(int quan);
        double totalPrice();
        //double totalValace();
};
#endif // ORDER_HPP

