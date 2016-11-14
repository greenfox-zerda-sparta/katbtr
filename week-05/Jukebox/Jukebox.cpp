#include "Jukebox.h"
#include "Song.h"

Jukebox::Jukebox() {
    songs = 0;
    song_counter = 0;
}

void Jukebox::add_song(Song &song) {
    Song** temp = new Song*[song_counter + 1];
    if (songs != 0) {
        for (int i = 0; i < song_counter; i++) {
            temp[i] = songs[i];
        }
    }
    temp[song_counter]= &song;
    delete[] songs;
    songs = temp;
    song_counter++;
}

void Jukebox::rate(Song& song, unsigned int _rate) {
    song.rate(_rate);
}

float Jukebox::get_artist_rating(std::string _artist) {
    if (songs != 0) {
        int sum_of_rates = 0;
        int count_of_rates = 0;
        for (unsigned int i = 0; i < song_counter; i++) {
            if (songs[i]->get_artist() == _artist) {
                sum_of_rates += songs[i]->get_sum_of_ratings();
                count_of_rates += songs[i]->get_count_of_ratings();
            }
        }
        return (float) sum_of_rates / count_of_rates;
    } else {
        return 0;
    }
}

/*
float Jukebox::get_genre_rating(std::string _genre) {
    if (songs != 0) {
        int sum_of_rates = 0;
        int count_of_rates = 0;
        for (unsigned int i = 0; i < song_counter; i++) {
            if (songs[i]->get_genre() == _genre) {
                sum_of_rates += songs[i]->get_sum_of_ratings();
                count_of_rates += songs[i]->get_count_of_ratings();
            }
        }
        return (float) sum_of_rates / count_of_rates;
    } else {
        return 0;
    }
}
*/

std::string Jukebox::top_rated_title() {
    Song* top_rated = songs[0];
    for (unsigned int i = 0; i < song_counter; i++) {
        if (songs[i]->get_rate_ave() > top_rated->get_rate_ave()) {
            top_rated = songs[i];
        }
    }
    return top_rated->get_title();
}

/*
std::string Jukebox::top_rated_genre() {
    Song* top_rated = songs[0];
    float top_score = get_genre_rating(0);
    for (unsigned int i = 0; i < 4; i++) {
        if (get_genre_rating(i) > top_score) {
            top_rated = songs[i];
        }
    }
    return top_rated->get_genre();
}
*/
