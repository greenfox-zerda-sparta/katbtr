#include <iostream>
#include "Logfile.h"

using namespace std;

Logfile::Logfile() {
    logbuffer = "";
    std::ofstream logfile;
    logfilename = "Bulls and Cows Game " + LocalTimer->GetTimeFileFormat() + ".txt";
}

Logfile::~Logfile() {

}

void Logfile::log_buffer(std::string logbuffer) {
    logfile.open(logfilename.c_str(), std::ios::app);
    logfile << logbuffer << endl;
    logfile.close();
}
