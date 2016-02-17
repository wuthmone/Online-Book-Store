#ifndef AUDIOCD_HPP
#define AUDIOCD_HPP
#include "ItemInfo.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class AudioCD: virtual public ItemInfo{
    string artist;
    string recordComp;

public:
    AudioCD ();
    AudioCD (int id, string title , double price, int quan ,string artist, string recordComp):
        ItemInfo(id, title, price, quan),artist(artist), recordComp(recordComp){
            cout << "AudioCd to be created!" << endl;
        }
    void getInfo ();
    void setInfo (int id, string title , double price, int quan , string artist,string recordComp);
    void removedAudioCD (vector<AudioCD> &a, int i);
    void sortAudioCD (vector<AudioCD>& b );
};
#endif // AUDIOCD_HPP

