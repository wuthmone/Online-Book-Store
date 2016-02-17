#ifndef VIDEO_HPP
#define VIDEO_HPP
#include "ItemInfo.hpp"
#include <string>
#include <vector>

using namespace std;

class VideoGame : virtual public ItemInfo{
    string company;
    string platform;

public:
    VideoGame ();
    VideoGame (int id, string title, double price, int quan, string company, string platform):
        ItemInfo(id, title, price, quan), company(company), platform(platform) {}

    void getInfo ();
    void setInfo (int id, string title , double price, int quan , string company,string platform);
    void removedVideoGame (vector<VideoGame> &a, int i);
    void sortVideoGame (vector<VideoGame>& b );
};
#endif // VIDEO_HPP

