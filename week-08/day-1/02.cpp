// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>

using namespace std;

#define myINT 8;

int main() {

    cout << "Integer 1: " << myINT;
    #undef myINT;
    #define myINT 10;
    cout << " | Integer 2: " << myINT;

    return 0;
}