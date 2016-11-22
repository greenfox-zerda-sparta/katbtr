#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string sentence, char given_character) throw (const char*) {
    int length_counter = 1;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == given_character) {
            length_counter++;
        }
    }
    if (length_counter == 1) {
        throw "Character is not in the string";
    }
    string* array = new string[length_counter];
    int j = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == given_character) {
            j++;
            i++;
        }
        array[j] += sentence[i];
    }
        return array;
}

int main() {

    try {
        string* str = split("What a nice day", ' ');
        for (int i = 0; i < str->size(); i++) {
            cout << str[i] << endl;
        }
        delete[] str;
    }
    catch (const char* excp) {
        cout << "Exception: " << excp << endl;
    }
    return 0;
}