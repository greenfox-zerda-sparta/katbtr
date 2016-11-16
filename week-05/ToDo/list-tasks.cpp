#include <iostream>
#include <fstream>
#include "list-tasks.h"

using namespace std;

void list_tasks(string _filename) {
    ifstream my_file;
    my_file.open(_filename);
    if (my_file.is_open()) {
        string file_content;
        unsigned int line_number = 1;
        while (my_file >> file_content) {
            cout << line_number << " - " << file_content << endl;
            line_number++;
        }
    } else {
        cerr << "Could not open the file";
    }
    my_file.close();
}