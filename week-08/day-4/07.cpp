#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string text) {
    if (text.length() == 1) {
        if (text[0] == 'x') {
            text[0] = 'y';
        }
        return text;
    } else {
        if (text[0] == 'x') {
            text[0] = 'y';
        }
        return text[0] + change_x_to_y(text.substr(1));
    }
}

int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

    cout << change_x_to_y("Nagxon fagx");

    return 0;
}
