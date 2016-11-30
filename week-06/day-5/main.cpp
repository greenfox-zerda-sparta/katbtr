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
    for (unsigned int i = 0; i < 4; i++) {
        random_number[i] = rand() % 10;
    }
    print_vector(random_number);

    string user_guess;
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
        }
    }

    if (bull_counter == 4) {
        cout << "Congratulations, you win!" << endl;
    } else {
        cout << "Bulls: " << bull_counter << endl;

    int cow_counter = 0;
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            if (random_number[i] != user_guess_int[i]) {
                if (random_number[i] == user_guess_int[j]) {
                    cow_counter++;
                }
            }
        }
    }

    cout << "Cows: " << cow_counter << endl;
}
    return 0;
}