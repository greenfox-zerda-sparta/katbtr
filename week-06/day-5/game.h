#include <iostream>
#include <vector>

#ifndef BULLSANDCOWS_GAME_H
#define BULLSANDCOWS_GAME_H

class Game {
private:
    std::vector <int> orig_random_number;
    std::vector <int> random_number;
    std::string user_guess;
    std::vector<int> user_guess_int;
public:
    Game();
    ~Game();
    void set_orig_random_number();
    std::vector<int> get_orig_random_number();
    void set_random_number();
    std::vector<int> get_random_number();
    std::vector<int> toint_user_guess(std::string _user_guess);
    void counting_bulls_and_cows();

};

#endif //BULLSANDCOWS_GAME_H
