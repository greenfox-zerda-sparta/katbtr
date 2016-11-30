#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void print_vector(vector<int>& vvv) {
    unsigned int size = vvv.size();
    for (unsigned int i = 0; i < size; i++) {
        cout << vvv[i];
    }
    cout << endl;
}

void print_string(string str) {
    unsigned long size = str.size();
    for (unsigned int i = 0; i < size; i++) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    vector<int> random_number(4);
    vector<int> orig_random_number(4);
    for (unsigned int i = 0; i < 4; i++) {
        orig_random_number[i] = rand() % 10;
    }
    print_vector(orig_random_number);

    string user_guess;
    int serie_counter = 0;
    while (serie_counter < 10) {
        for (unsigned int i = 0; i < 4; i++) {
            random_number[i] = orig_random_number[i]; // to set back random_number from 999 forms
        }
        cout << "Make a guess!" << endl;
        cin >> user_guess;

        //    print_string(user_guess);

        vector<int> user_guess_int;
        char a = ' ';
        for (int i = 0; i < 4; i++) {
            a = user_guess[i];
            user_guess_int.push_back(int(a) - 48);
        }
        //    print_vector(user_guess_int);

        int bull_counter = 0;

            for (unsigned int i = 0; i < 4; i++) {
                if (random_number[i] == user_guess_int[i]) {
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
                        if (random_number[i] != user_guess_int[i]) {
                            if (random_number[i] == user_guess_int[j]) {
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