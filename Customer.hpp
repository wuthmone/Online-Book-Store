#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include <string>
using namespace std;

class Customer{
    string cusName ;
    string cusAddress;
    string cusContactNo;
public:
    Customer();
    Customer(string cusName,string cusAddress, string cusContactNo) :
        cusName(cusName), cusAddress(cusAddress), cusContactNo(cusContactNo){}
    void setCusInfo(string cusName, string cusAddress, string cusContactNo);
    void displayCusInfo(string cusName, string cusAddress, string cusContactNo);

};
#endif // CUSTOMER_HPP


