#ifndef REGGEA_H
#define REGGEA_H

#include "Song.h"

class Reggea : public Song {
public:
    Reggea(std::string title, std::string artist);
    bool rate(unsigned int _rate);
};

#endif /* REGGEA_H */
