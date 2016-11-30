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

    int serie_counter = 0;
    while (serie_counter < 10) {
        for (unsigned int i = 0; i < 4; i++) {
            random_number[i] = orig_random_number[i]; // to set back random_number from 999 forms
        }
        get_user_guess();
        
        int bull_counter = 0;

            for (unsigned int i = 0; i < 4; i++) {
                if (random_number[i] == switch_user_guess_int(get_user_guess)[i]) {
                    bull_counter++;
                    random_number[i] = 999; // in case there are same numbers present, so those won't be calculated multiple times
                }
            }

            if (bull_counter == 4) {
                cout << "Congratulations, you win!" << endl;
                break;
            } else {
                cout << "Bulls: " << bull_counter << endl;

                int cow_counter = 0;
                for (unsigned int i = 0; i < 4; i++) {
                    for (unsigned int j = 0; j < 4; j++) {
                        if (random_number[i] != get_user_guess()[i]) {
                            if (random_number[i] == get_user_guess()[j]) {
                                cow_counter++;
                                random_number[i] = 999; // in case there are same numbers present, so those won't be calculated multiple times
                            }
                        }
                    }
                }
                cout << "Cows: " << cow_counter << endl;
            }
        serie_counter++;
        if (serie_counter == 10) {
            cout << "Game is over! Unfortunately you couldn't guess the number in 10 rounds." << endl;
        }
    }

    return 0;
}