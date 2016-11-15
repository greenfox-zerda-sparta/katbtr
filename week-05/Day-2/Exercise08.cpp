#include <iostream>
#include <fstream>

using namespace std;

bool copies_file(string filename1, string filename2) {
    ifstream my_file1;
    my_file1.open(filename1);
    if (!my_file1.is_open()) {
        return false;
    }
    string file_content;
    string line;
    while (my_file1 >> line) {
        file_content += line + "\n";
    }
    my_file1.close();

    ofstream my_file2;
    my_file2.open(filename2);
    my_file2 << file_content;
    my_file2.close();

    return true;
}

int main() {
    // Write a function that copies a file to an other
    // It should take the filenames as parameters
    // It should return a boolean that shows if the copy was successful

    cout << "The copy was succesful: " << copies_file("seventh-exercise.txt", "eigth-exercise.txt");

    return 0;
}