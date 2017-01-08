#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>
#include "Time.h"
#ifndef BULLSANDCOWS2_LOGFILE_H
#define BULLSANDCOWS2_LOGFILE_H


class Logfile {
private:
    std::string logbuffer;
    std::string logfilename;
    std::ofstream logfile;
    Time* LocalTimer;

public:
    Logfile();
    ~Logfile();
    void log_buffer(std::string);
};

template<class T>
std::string toString(const T& t)
{
    std::ostringstream stream;
    stream << t;
    return stream.str();
}

#endif //BULLSANDCOWS2_LOGFILE_H
