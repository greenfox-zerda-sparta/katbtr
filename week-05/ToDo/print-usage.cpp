#include <iostream>
#include "print-usage.h"

using namespace std;

void print_usage() {
    cout << "CLI Todo application" << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "Command line arguments:" << endl;
    cout << "-l   Lists all the tasks" << endl;
    cout << "-a   Adds a new task" << endl;
    cout << "-r   Removes a task" << endl;
    cout << "-c   Completes an task" << endl;
}