#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#ifndef BULLSANDCOWS2_RANDOMNUMBER_H
#define BULLSANDCOWS2_RANDOMNUMBER_H

class RandomNumber {
private:
    std::string random_number;
    std::string numbers;
public:
    RandomNumber();
    ~RandomNumber();
    std::string get_random_number();
    void generate_random_number();
};

#endif //BULLSANDCOWS2_RANDOMNUMBER_H
