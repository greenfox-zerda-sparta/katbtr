
#include "GameLogic.h"

GameLogic::GameLogic() {
    randomnumber = new RandomNumber;
    randomnumber->generate_random_number();
}

GameLogic::~GameLogic() {
    delete randomnumber;
}

void GameLogic::set_user_guess(std::string input) {
    userguess = input;
}

std::string GameLogic::get_user_guess() {
    return userguess;
}

int GameLogic::count_bulls() {
    bullcounter = 0;
    for (unsigned int i = 0; i < 4; i++) {
        if (randomnumber->get_random_number()[i] == userguess[i]) {
            bullcounter++;
        }
    }
    return bullcounter;
}

int GameLogic::count_cows() {
    cowcounter = 0;
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            if (randomnumber->get_random_number()[i] == userguess[j] && i != j) {
                cowcounter++;
                break;
            }
        }
    }
    return cowcounter;
}

bool GameLogic::is_won() {
    return count_bulls() == 4;
}
