#include <iostream>
#include <vector>
#include "interface.h"
#include <string>
#include "random_number.h"

using namespace std;

void print_intro() {
    cout << "Bulls and Cows Game" << endl;
    cout << "You have to guess a 4-digit long number" << endl;
}

void get_user_guess() {
    string user_guess;
    cout << "Make a guess!" << endl;
    try {
        cin >> user_guess;
       if (user_guess.size() != 4) {
           throw "This is not a 4-digit long number.";
       }
    }
    catch (const char* error) {
        cout << error << endl;
    }
}

vector<int> switch_user_guess_int(string _user_guess) {
    vector<int> user_guess_int;
    char a = ' ';
    for (int i = 0; i < 4; i++) {
        a = _user_guess[i];
        user_guess_int.push_back(int(a) - 48);
    }
    return user_guess_int;
}