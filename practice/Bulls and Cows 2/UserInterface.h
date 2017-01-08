#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "GameLogic.h"
#include "Logfile.h"

#ifndef BULLSANDCOWS2_USERGUESS_H
#define BULLSANDCOWS2_USERGUESS_H


class UserInterface {
private:
    int guesscounter;
    GameLogic* gamelogic;
    Logfile* my_logfile;
    std::string logbuffer;

public:
    UserInterface();
    ~UserInterface();
    void run();
    void make_new_game();
};

#endif //BULLSANDCOWS2_USERGUESS_H
