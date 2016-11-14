#ifndef POP_H
#define POP_H

#include "Song.h"

class Pop : public Song {
public:
    Pop(std::string title, std::string artist);
    bool rate(unsigned int _rate);
};

#endif /* POP_H */
