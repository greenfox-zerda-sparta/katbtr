#include <iostream>
#include <string>

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

int main(int argc, char* argv[]) {

    if (argc == 1) {
        print_usage();
    }


    return 0;
}