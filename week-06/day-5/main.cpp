#include <iostream>
#include <vector>
#include "print.h"
#include "interface.h"

using namespace std;

int main() {

    print_intro();

    srand(time(NULL));
    vector<int> random_number(4);
    vector<int> orig_random_number(4);
    for (unsigned int i = 0; i < 4; i++) {
        orig_random_number[i] = rand() % 10;
    }
    print_vector(orig_random_number);

    int series_counter = 0;
    while (series_counter < 10) {
        for (unsigned int i = 0; i < 4; i++) {
            random_number[i] = orig_random_number[i]; // to set back random_number from 999 forms
        }

        string user_guess = get_user_guess();
        vector<int> user_guess_int;
        char a = ' ';
        for (int i = 0; i < 4; i++) {
            a = user_guess[i];
            user_guess_int.push_back(int(a) - 48);
        }

        int bull_counter = 0;

        for (unsigned int i = 0; i < 4; i++) {
            if (random_number[i] == user_guess_int[i]) {
                bull_counter++;
                random_number[i] = 999; // in case there are same numbers present, so those won't be calculated multiple times
            }
        }

        if (is_game_won(bull_counter) == true) {
            break;
        } else {

            int cow_counter = 0;
            for (unsigned int i = 0; i < 4; i++) {
                for (unsigned int j = 0; j < 4; j++) {
                    if (random_number[i] != user_guess_int[i]) {
                        if (random_number[i] == user_guess_int[j]) {
                            cow_counter++;
                            random_number[i] = 999; // in case there are same numbers present, so those won't be calculated multiple times
                        }
                    }
                }
            }
            print_cows(cow_counter);
        }
    }
    series_counter++;
    if (is_game_over(series_counter) == true) {
        return 0;
    }


    return 0;
}