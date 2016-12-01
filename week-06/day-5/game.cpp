#include <iostream>
#include <vector>
#include "game.h"
#include "interface.h"

using namespace std;


void Game::set_orig_random_number() {
    srand(time(NULL));
    vector<int> orig_random_number(4);
    for (unsigned int i = 0; i < 4; i++) {
        orig_random_number[i] = rand() % 10;
    }
}

vector<int> Game::get_orig_random_number() {
    return orig_random_number;
}

Game::Game() {
    this->orig_random_number;
    this->random_number;
    this->user_guess;
    this->user_guess_int;
}

void Game::set_random_number() {
    vector<int> random_number(4);
    for (unsigned int i = 0; i < 4; i++) {
        random_number[i] = orig_random_number[i];
    }
}

vector<int> Game::get_random_number() {
    return random_number;
}

vector<int> Game::toint_user_guess(string _user_guess) {
    vector<int> user_guess_int;
    char a = ' ';
    for (int i = 0; i < 4; i++) {
        a = _user_guess[i];
        user_guess_int.push_back(int(a) - 48);
    }
}

void Game::counting_bulls_and_cows() {
    int bull_counter = 0;
    int cow_counter = 0;
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            if (random_number[i] == user_guess_int[j]) {
                if (i == j) {
                    bull_counter++;
                    random_number[i] = 999;
                } else {
                    cow_counter++;
                    random_number[i] = 999;
                }
            }
        }
    }
    if (is_game_won(bull_counter)) {
        return;
    } else {
        print_bulls(bull_counter);
        print_cows(cow_counter);
    }
}

Game::~Game() {

}