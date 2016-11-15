#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open a file called "second-exercise.txt"
    // Read the content of the file and print it to the terminal window

    ofstream my_file;
    my_file.open("second-exercise.txt");
    my_file << "Apple\n";
    my_file.close();

    ifstream my_file2;
    my_file2.open("second-exercise.txt");
    string file_content;
    my_file2 >> file_content;
    cout << file_content;
    my_file2.close();


    return 0;
}