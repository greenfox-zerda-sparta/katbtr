#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and pritns the decrypred text to the terminal window.

    ifstream my_file;
    my_file.open("Exercise10.txt");

    string line;
    string new_line = "";
    while(getline(my_file, line)) {
        for (int i = line.length() - 1; i > -1; i--) {
            new_line = line[i];
            cout << new_line;
        }
        cout << endl;
    }
    my_file.close();

  return 0;
}