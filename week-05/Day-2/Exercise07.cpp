#include <iostream>
#include <fstream>

using namespace std;

void writes_file(string filename, string content) {
    ofstream my_file;
    my_file.open(filename);
    my_file << content;
    my_file.close();
}

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

    writes_file("seventh-exercise.txt", "Macuki\n cukimuki nyuszi\n puszi");

  return 0;
}