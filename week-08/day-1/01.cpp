// Define 3 constants using a macro directive.
// One integer, one float and one string of characters.
// Print them out to the console in Your main funciton.

#include <iostream>

using namespace std;

#define myINT 8;
#define myFLOAT 5.34523;
#define mySTRING "Valami";

int main() {

    cout << "Integer: " << myINT;
    cout << endl << "Float: " << myFLOAT;
    cout << endl << "String: " << mySTRING;
    cout << endl;

    return 0;
}