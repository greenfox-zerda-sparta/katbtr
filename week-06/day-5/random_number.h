#include <iostream>
#include <vector>

#ifndef BULLSANDCOWS_RANDOM_NUMBER_H
#define BULLSANDCOWS_RANDOM_NUMBER_H


class RandomNumber {
private:
    std::vector<int> orig_random_number;
public:
    RandomNumber();
    ~RandomNumber();
    void set_orig_random_number();
    std::vector<int> get_orig_random_number();
    std::vector<int> random_number;
    void set_random_number();
};


#endif //BULLSANDCOWS_RANDOM_NUMBER_H
