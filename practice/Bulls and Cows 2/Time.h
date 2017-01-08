#ifndef BULLSANDCOWS2_TIME_H
#define BULLSANDCOWS2_TIME_H
#define _CRT_SECURE_NO_WARNINGS

#include <ctime>
#include <string>

class Time {
public:
    Time();
    std::string GetCurrentTime();
    std::string GetTimeFileFormat();
};

#endif //BULLSANDCOWS2_TIME_H
