#include <iostream>
#include "Song.h"

using namespace std;

Song::Song (string title, string artist, Genre genre) {
    this->title = title;
    this->artist = artist;
    this->genre = genre;
    count_of_ratings = 0;
    sum_of_ratings = 0;
}

bool Song::rate(unsigned int _rate) {
    if (genre == Pop && _rate > 0 && _rate < 6 || genre == Rock && _rate > 1 && _rate < 6 || genre == Reggae && _rate > 0 && _rate < 5) {
        ++count_of_ratings;
        sum_of_ratings += _rate;
        return true;
    } else {
        return false;
    }
}

float Song::set_rate_ave() {
    return (float)sum_of_ratings / count_of_ratings;
}

string Song::get_title() {
    return title;
}

string Song::get_artist() {
    return artist;
}