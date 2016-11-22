#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

string return_sentence(int number) throw (int, const char*) {
    if (number > 5) {
        throw number - 5;
    }
    if (number < 0) {
        throw "This is a negative number.";
    }
    string result_sentence = "";
    int size = sizeof(sentence)/sizeof(char*);
    for (int i = 0; i < size; i++) {
        result_sentence += sentence[i];
        if (i != size - 1) {
            result_sentence += " ";
        }
    }
    return result_sentence;
}

int main() {
    try {
        cout << return_sentence(4) << endl;
        cout << return_sentence(-8) << endl;
    } catch (char const* excpt) {
        cout << excpt << endl;
    }try {
        cout << return_sentence(15) << endl;
    } catch (int x) {
        cout << "Number is bigger than 5 by: " << x << endl;
    }
    return 0;
}