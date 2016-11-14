#ifndef TEST_SONG_H
#define TEST_SONG_H

#include <iostream>
#include <string>

using namespace std;

enum Genre {Rock, Pop, Reggae};

class Song {

    string title;
    string artist;
    Genre genre;
    int count_of_ratings;
    int sum_of_ratings;
public:
    Song(string title, string artist, Genre genre);
    bool rate(unsigned int _rate);
    float set_rate_ave();
    string get_title();
    string get_artist();
};


#endif //TEST_SONG_H
