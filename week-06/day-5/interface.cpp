#include <iostream>
#include <vector>
#include "interface.h"
#include <string>


using namespace std;

void print_intro() {
    cout << "Bulls and Cows Game" << endl;
    cout << "You have to guess a 4-digit long number" << endl;
}

string get_user_guess() {
    string user_guess;
    string err;
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
    return user_guess;
}

bool is_game_won(int _bull_counter) {
    if (_bull_counter == 4) {
       cout << "Congratulations! You win!" << endl;
        return true;
    } else {
        cout << "Bulls: " << _bull_counter << endl;
    }
    return false;
}

void print_cows(int _cow_counter) {
    cout << "Cows: " << _cow_counter << endl;
}

bool is_game_over(int _series_counter) {
    if (_series_counter == 10) {
        cout << "Game is over! Unfortunately you couldn't guess the number in 10 rounds." << endl;
        return true;
    } else
    return false;
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