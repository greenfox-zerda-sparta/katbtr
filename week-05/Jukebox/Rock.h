#ifndef ROCK_H
#define ROCK_H

#include "Song.h"

class Rock : public Song {
public:
    Rock(std::string title, std::string artist);
    bool rate(unsigned int _rate);
};

#endif /* ROCK_H */
