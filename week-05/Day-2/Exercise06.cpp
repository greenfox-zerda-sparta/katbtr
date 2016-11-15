#include <iostream>
#include <fstream>

using namespace std;

string reads_file(string filename) {
    ifstream my_file;
    my_file.open(filename);
    string file_content;
    string line;
    while (my_file >> line) {
        file_content += line + "\n";
    }
    my_file.close();
    return file_content;
}

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

    cout << reads_file("fourth-exercise.txt");


  return 0;
}