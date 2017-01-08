
#include <cstdlib>
#include "RandomNumber.h"

using namespace std;

RandomNumber::RandomNumber() {

}

RandomNumber::~RandomNumber() {

}

string RandomNumber::get_random_number() {
    return random_number;
}

void RandomNumber::generate_random_number() {
    srand((unsigned int) time(NULL));
    numbers = { "0123456789" };
    random_number.push_back(numbers[rand() % 10]);
    for (int i = 1; i < 4; i++) {
        int number;
        number = numbers[rand() % 10];
        if (number == random_number[i - 1]) {
            i--;
        } else {
            random_number.push_back(number);
        }
    }
    cout << random_number << endl;
}