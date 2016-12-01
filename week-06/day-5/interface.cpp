#include <iostream>
#include <vector>
#include "interface.h"

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

void print_bulls(int _bull_counter) {
    cout << "Bulls: " << _bull_counter << endl;
}

bool is_game_won(int _bull_counter) {
    if (_bull_counter == 4) {
       cout << "Congratulations! You win!" << endl;
        return true;
    } else {
        print_bulls(_bull_counter);
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

void print_solution() {
    cout << "The solution was: ";
}
