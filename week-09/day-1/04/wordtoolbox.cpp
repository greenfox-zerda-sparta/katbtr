#include <iostream>
#include <algorithm>
#include "wordtoolbox.h"

WordToolbox::WordToolbox(std::string my_string) {
    stringHeld = my_string;
}

void WordToolbox::set_string(std::string my_string) {
    stringHeld = my_string;
}

std::string WordToolbox::get_string() {
    return stringHeld;
}

bool WordToolbox::isAnAnagram(std::string stringToCheck) {
    std::sort(stringToCheck.begin(), stringToCheck.end());
    std::sort(stringHeld.begin(), stringHeld.end());
    return stringToCheck == stringHeld;
}

int WordToolbox::countHowMany(char charToFind) {
    int counter = 0;
    for (int i = 0; i < stringHeld.size(); i++) {
        if (stringHeld[i] == charToFind) {
            counter++;
        }
    }
    return counter;
}
