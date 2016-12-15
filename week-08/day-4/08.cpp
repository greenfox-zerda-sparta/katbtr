#include <iostream>
#include <string>

using namespace std;

string remove_x(string text) {
    if (text.length() == 1) {
        if (text[0] != 'x') {
            return text;
        } else {
            return "";
        }
    }
    if (text[0] == 'x') {
        text = text.substr(1);
        return remove_x(text);
    }
    return text[0] + remove_x(text.substr(1));
}

int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.

    cout << remove_x("Esikx kixnt a hxó");

  return 0;
}

