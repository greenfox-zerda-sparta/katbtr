#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create a program that decrypts the file called "reversed-order.txt",
    // and pritns the decrypred text to the terminal window.

    ifstream my_file;
    my_file.open("Exercise11.txt");

    string file_content;
    string line;
    string show = "";
    int count_line = 0;
    while(getline(my_file, line)) {
      count_line++;
    }

    my_file.close();

    for (int j = 0; j < count_line; j++) {
        my_file.open("Exercise11.txt");
        for (int i = count_line - j; i > 0; i--) {
            getline(my_file, line);
        }
        cout << line << "\n";

        my_file.close();
    }

    return 0;
}