
#include <iostream>
#include <string>

using namespace std;

string insert_star(string text) {
    string mod_text = "";
    if (text.length() == 1) {
        mod_text = text[0];
    } else {
        mod_text += text[0];
        mod_text += "*";
    }
    text.erase(text.begin(), text.begin() + 1);
    if (text.length() != 0) {
        mod_text += insert_star(text);
    }
    return mod_text;
}

int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".

    cout << insert_star("Nagyon esik kint a hó");

    return 0;
}