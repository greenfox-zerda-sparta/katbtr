#include <fstream>
#include <iostream>
#include "make-todo-file.h"

using namespace std;

void make_file(string file_name) {
    ofstream todo_file;
    todo_file.open(file_name.c_str());
    if (todo_file.is_open()) {
        string todo_item = "Egy cukker";
        todo_file << todo_item + "\n";
        todo_file.close();
    }
    return;
}