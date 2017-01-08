
#include "UserInterface.h"
#include "tostring.h"

using namespace std;

UserInterface::UserInterface() {
    cout << "           Bulls and Cows Game          " << endl;
    cout << "========================================" << endl;
    cout << "Guess a 4-digit number within 10 rounds." << endl;
    guesscounter = 0;
    gamelogic = new GameLogic;
    my_logfile = new Logfile;
}

UserInterface::~UserInterface() {
    delete gamelogic;
    delete my_logfile;
}

void UserInterface::run() {

    while (guesscounter != 10) {
        string userguess;
        cout << "Make your guess! You have " << 10 - guesscounter << " guesses left." << endl;
        logbuffer = "Make your guess! You have " + to_string(10 - guesscounter) + " guesses left.\n";
        my_logfile->log_buffer(logbuffer);
        cin >> userguess;
        my_logfile->log_buffer(userguess);
        gamelogic->set_user_guess(userguess);
        if (gamelogic->is_won()) {
            cout << "Congratulations, you've guessed the number!" << endl;
            logbuffer = "Congratulations, you've guessed the number!\n";
            my_logfile->log_buffer(logbuffer);
            break;
        }
        else {
            cout << "Bulls: " << gamelogic->count_bulls() << " Cows: " << gamelogic->count_cows() << endl;
            logbuffer = "Bulls: "  + to_string(gamelogic->count_bulls()) + " Cows: " + to_string(gamelogic->count_cows()) + "\n";
            my_logfile->log_buffer(logbuffer);
        }
        guesscounter++;
    }

    char repeatgame;
    cout << "Would you like to play again? (y/n)" << std::endl;
    cin >> repeatgame;
    if (repeatgame == 'y') {
        make_new_game();
    } else {
        cout << "Thank you for playing with me!" << endl;
    }
}

void UserInterface::make_new_game() {
    cout << "           Bulls and Cows Game          " << endl;
    cout << "========================================" << endl;
    cout << "Guess a 4-digit number within 10 rounds." << endl;
    delete gamelogic;
    guesscounter = 0;
    gamelogic = new GameLogic;
    my_logfile = new Logfile;
    run();
}
