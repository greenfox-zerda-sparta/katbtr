#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <string>
#include "wordtoolbox.h"

using namespace std;

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
    std::string temp = stringHeld;
    std::sort(stringToCheck.begin(), stringToCheck.end());
    std::sort(temp.begin(), temp.end());
    return to_lower(stringToCheck) == to_lower(temp);
}

std::string WordToolbox::to_lower(std::string str){
    int i = 0;
    char c;
    while (str[i]) {
        c = str[i];
        str[i] = char(tolower(c));
        i++;
    }
    return str;
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

