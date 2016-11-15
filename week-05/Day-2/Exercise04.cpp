
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open a file called "fourth-exercise.txt"
    // Print all of its lines to the terminal window

    ifstream my_file;
    my_file.open("fourth-exercise.txt");
    string file_content;
    while (my_file >> file_content) {
        cout << file_content << endl;
    }

    my_file.close();

    return 0;
}