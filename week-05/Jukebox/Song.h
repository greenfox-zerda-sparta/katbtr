#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
    std::string title;
    std::string artist;
protected:
    std::string genre;
    int count_of_ratings;
    int sum_of_ratings;
public:
    Song();
    Song(std::string title, std::string artist);
    virtual bool rate(unsigned int _rate);
    float set_rate_ave();
    std::string get_title();
    std::string get_artist();
    std::string get_genre();
    float get_rate_ave();
    float get_count_of_ratings();
    float get_sum_of_ratings();
};

#endif /* SONG_H */