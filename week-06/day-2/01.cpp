#include <iostream>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    try {
        int a = 10;
        int b = 12;
        if (b > a) {
            throw 26;
        }
    } catch(int x) {
        cout << "Error number: " << x << endl;
    }


	return 0;
}