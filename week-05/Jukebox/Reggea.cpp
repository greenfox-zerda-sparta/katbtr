#include <string>
#include "Reggea.h"

using namespace std;

Reggea::Reggea(string title, string artist) : Song (title, artist) {
    genre = "Reggea";
}

bool Reggea::rate(unsigned int _rate) {
    if (_rate > 1 && _rate < 5) {
        ++count_of_ratings;
        sum_of_ratings += _rate;
        return true;
    } else {
        return false;
    }
}