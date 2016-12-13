#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

map<char, int> char_calculates(string& input) {
    map<char, int> output;
    for (unsigned int i = 0; i < input.length(); i++) {
        if(output.find(input[i]) == output.end()) {
            output[input[i]] = 1;
        } else {
            ++output[input[i]];
        }
    }
    return output;
}

int main() {

    string text = "WowFunction";
    map<char, int> calculated = char_calculates(text);
    for(map<char, int>::iterator it = calculated.begin(); it != calculated.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}