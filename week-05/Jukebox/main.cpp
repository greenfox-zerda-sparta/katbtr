#include <iostream>
#include "Song.h"

using namespace std;

int main() {

    Song mySong1("Hurray", "2boyz", Rock);
    mySong1.rate(4);
    mySong1.rate(5);
    mySong1.rate(6);
    cout << "Average rate for " << mySong1.get_title() << " from " << mySong1.get_artist() << " is " << mySong1.set_rate_ave() << endl;

    Song mySong2("Weed, weed", "Warm Jackets", Reggae);
    mySong2.rate(2);
    mySong2.rate(5);
    mySong2.rate(5);
    cout << "Average rate for " << mySong2.get_title() << " from " << mySong2.get_artist() << " is " << mySong2.set_rate_ave() << endl;

}