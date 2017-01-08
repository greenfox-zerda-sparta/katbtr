#include "RandomNumber.h"
#include <iostream>

#ifndef BULLSANDCOWS2_GAMELOGIC_H
#define BULLSANDCOWS2_GAMELOGIC_H


class GameLogic {
private:
    RandomNumber* randomnumber;
    std::string userguess;
    int bullcounter;
    int cowcounter;
public:
    GameLogic();
    ~GameLogic();
    void set_user_guess(std::string);
    std::string get_user_guess();
    int count_bulls();
    int count_cows();
    bool is_won();
};


#endif //BULLSANDCOWS2_GAMELOGIC_H

