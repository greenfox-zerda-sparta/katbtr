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


int main(int argc, char** argv) {

    if (argc == 1) {
        print_usage();
    } else if (string(argv[1]) == "-l") {
            cout << "Bassza meg működik!!!\n";
        } else if (string(argv[1]) == "-a") {
            cout << "Most -a -val műxik \n";
        } else if (string(argv[1]) == "-r") {
            cout << "Ne mán!\n";
        } else if (string(argv[1]) == "-c") {
            cout << "Szopok itt a string switch-csel\n";
        } else {
            print_usage();
        }


/*
    make_file("todolist.txt");

    */


    return 0;
}

