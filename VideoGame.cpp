#include "VideoGame.hpp"
#include <string>
#include <iostream>
using namespace std;

VideoGame :: VideoGame()
{

}

void VideoGame:: getInfo ()
{
        cout << "ID        : " << id << endl;
        cout << "Title     : " << title << endl;
        cout << "Price     : " << price << "RM" << endl;
        cout << "Quanity   : " << quan << endl;
        cout << "Company   : " <<company  << endl;
        cout << "Platform  : " << platform << endl;
        cout << endl;

}
void VideoGame :: setInfo (int id, string title , double price,
                      int quan , string company, string platform)
{
    this -> id = id;
    this -> title = title;
    this -> price = price;
    this -> quan = quan;
    this -> company = company;
    this -> platform= platform;
}

void VideoGame ::removedVideoGame (vector<VideoGame> &a, int i)

{
    a.erase (a.begin()+(i-1));
}

void VideoGame ::sortVideoGame (vector<VideoGame>& b)
{
    sort(b.begin(),b.end(),sortByTitle<VideoGame>());
}



