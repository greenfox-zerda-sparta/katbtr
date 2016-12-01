#include <iostream>
#include <vector>
#include "print.h"
#include "interface.h"
#include "game.h"

using namespace std;

int main() {

    print_intro();

    Game* myGame;
    myGame->set_orig_random_number();
    print_vector(myGame.get_orig_random_number());
    int series_counter = 0;
    while (series_counter < 10) {

        string user_guess = get_user_guess();
        myGame->toint_user_guess(user_guess);
        myGame->counting_bulls_and_cows();
    }
    series_counter++;
    if (is_game_over(series_counter)) {
        print_solution();

        return 0;
    }




    return 0;
}