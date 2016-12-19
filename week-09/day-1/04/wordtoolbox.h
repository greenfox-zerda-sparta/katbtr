#include <iostream>

#ifndef W09D1E04_WORDTOOLBOX_H
#define W09D1E04_WORDTOOLBOX_H


class WordToolbox {
private:
    std::string stringHeld;
public:
    WordToolbox(std::string stringHeld);
    void set_string(std::string my_string);
    std::string get_string();
    bool isAnAnagram(std::string stringToCheck);
    int countHowMany(char charToFind);
    std::string to_lower(std::string str);
};


#endif //W09D1E04_WORDTOOLBOX_H
