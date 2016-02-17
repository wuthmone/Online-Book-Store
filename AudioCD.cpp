#include "ItemInfo.hpp"
#include "AudioCD.hpp"
#include <string>
#include <iostream>
using namespace std;
AudioCD :: AudioCD()
{

}

void AudioCD:: getInfo ()
{
    cout << "ID        : " << id << endl;
    cout << "Title     : " << title << endl;
    cout << "Price     : " << price << "RM" << endl;
    cout << "Quanity   : " << quan << endl;
    cout << "Artist    : " << artist << endl;
    cout << "Record Company : " <<recordComp << endl;
    cout << endl;
}
void AudioCD:: setInfo (int id, string title , double price, int quan , string artist,string recordComp)
{
    this -> id = id;
    this -> title = title;
    this -> price = price;
    this -> quan = quan;
    this -> artist = artist;
    this -> recordComp = recordComp;
}
void AudioCD:: removedAudioCD (vector<AudioCD> &a, int i)
{
    a.erase (a.begin()+(i-1));
}
void AudioCD:: sortAudioCD (vector<AudioCD>& b )
{

    sort(b.begin(),b.end(),sortByTitle<AudioCD>());
}

