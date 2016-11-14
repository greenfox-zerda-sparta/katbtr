#include <string>
#include "Rock.h"

using namespace std;

Rock::Rock(string title, string artist) : Song(title, artist) {
    genre = "Rock";
}

bool Rock::rate(unsigned int _rate) {
    if (_rate > 2 && _rate < 6) {
        ++count_of_ratings;
        sum_of_ratings += _rate;
        return true;
    } else {
        return false;
    }
}