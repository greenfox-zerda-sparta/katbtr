#include <iostream>
#include <string>
#include <fstream>
#include "print-usage.h"
#include "make-todo-file.h"

using namespace std;

/*
class ToDo {
private:
    string title;
    unsigned int status; // on list, started, completed
    string description;
public:
    ToDo ();
    ToDo (string _title);
    void set_title(string _title);
    string get_title();
    void set_status(unsigned int _status);
    unsigned int get_status();
    void set_description(string _description);
    string get_description();
};
*/

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

int main(int argc, char** argv) {

    if (argc == 1) {
        print_usage();
    } else if (string(argv[1]) == "-l") {
            list_tasks("todolist.txt");
        } else if (string(argv[1]) == "-a") {
            cout << "Most -a -val műxik \n";
        } else if (string(argv[1]) == "-r") {
            cout << "Ne mán!\n";
        } else if (string(argv[1]) == "-c") {
            cout << "Szopok itt a string switch-csel\n";
        } else {
            print_usage();
        }



    make_file("todolist.txt");




    return 0;
}

