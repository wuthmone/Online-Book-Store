#include "Customer.hpp"
#include <iostream>
#include <string>
using namespace std;

Customer:: Customer()
{

}

void Customer:: setCusInfo(string cusName, string cusAddress, string cusContactNo)
{
    this -> cusName = cusName;
    this -> cusAddress = cusAddress;
    this -> cusContactNo = cusContactNo;
}
void Customer:: displayCusInfo(string cusName, string cusAddress, string cusContactNo)
{
    cout << "Name          :" << cusName <<endl;
    cout << "Address       :" << cusAddress <<endl;
    cout << "Contact No    :" << cusContactNo <<endl;

}


