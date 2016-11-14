#include <iostream>
#include "Rock.h"
#include "Pop.h"
#include "Reggea.h"

using namespace std;

int main() {

    Rock mySong1("Way Back into Love", "Alex Fletcher");
    mySong1.rate(5);
    mySong1.rate(5);
    mySong1.rate(6);
    cout << "Average rate for " << mySong1.get_title() << " from " << mySong1.get_artist() << " is " << mySong1.set_rate_ave() << endl;

    Reggea mySong2("Buddha's Delight", "Cora");
    mySong2.rate(2);
    mySong2.rate(4);
    mySong2.rate(5);
    cout << "Average rate for " << mySong2.get_title() << " from " << mySong2.get_artist() << " is " << mySong2.set_rate_ave() << endl;

    Pop mySong3("Pop! Goes My Heart", "Pop");
    mySong3.rate(2);
    mySong3.rate(2);
    mySong3.rate(12);
    cout << "Average rate for " << mySong3.get_title() << " from " << mySong3.get_artist() << " is " << mySong3.set_rate_ave() << endl;

    return 0;
}
