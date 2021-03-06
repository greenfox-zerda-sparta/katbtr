#include <string>
#include "Pop.h"

using namespace std;

Pop::Pop(string title, string artist) : Song (title, artist) {
    genre = "Pop";
}

bool Pop::rate(unsigned int _rate) {
    if (_rate > 1 && _rate < 6) {
        ++count_of_ratings;
        sum_of_ratings += _rate;
        return true;
    } else {
        return false;
    }
}