#include <iostream>
#include "random_number.h"

using namespace std;

RandomNumber::RandomNumber() {
    get_orig_random_number();
}

void RandomNumber::set_orig_random_number() {
    for (unsigned int i = 0; i < 4; i++) {
        orig_random_number[i] = rand() % 10;
    }
}

vector<int> RandomNumber::get_orig_random_number() {
    return orig_random_number;
}

void RandomNumber::set_random_number() {
    for (unsigned int i = 0; i < 4; i++) {
        random_number[i] = orig_random_number[i];
    }
}
