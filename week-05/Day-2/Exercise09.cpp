#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.

    ifstream my_file;
    my_file.open("Duplicated-chars.txt");

    string file_content;
    string line;
    while(getline(my_file, line)) {
        file_content += line + "\n";
    }

    my_file.close();

    string show = "";
    for (int i= 0; i < file_content.length(); i += 2) {
        show += file_content[i];
    }

    cout << show;

    return 0;
}
