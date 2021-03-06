#include "Song.h"

using namespace std;

Song::Song() {
    this->title = "";
    this->artist = "";
    this->genre = "";
    count_of_ratings = 0;
    sum_of_ratings = 0;
}

Song::Song(string title, string artist) {
    this->title = title;
    this->artist = artist;
    this->genre = "";
    count_of_ratings = 0;
    sum_of_ratings = 0;
}

bool Song::rate(unsigned int _rate) {

}

string Song::get_title() {
    return title;
}

string Song::get_artist() {
    return artist;
}

float Song::set_rate_ave() {
    return (float)sum_of_ratings / count_of_ratings;
}

string Song::get_genre() {
    return genre;
}

float Song::get_rate_ave() {
    return set_rate_ave();
}

float Song::get_count_of_ratings() {
    return count_of_ratings;
}

float Song::get_sum_of_ratings() {
    return sum_of_ratings;
}