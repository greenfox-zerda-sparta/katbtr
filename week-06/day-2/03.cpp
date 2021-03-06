#include <iostream>
using namespace std;

// Write the body of the function below.
// It should throw an exception when b is zero.
// The exception is const char*, so it's basically "A text between apostrophes."
// Check the result.
// IMPORTANT: Note which part of the main functions has been executed before the exception has been caught!


float division(float a, float  b) throw (const char*) {
    if (b != 0) {
        return a / b;
    } else
        throw "No division by zero";
}

int main() {
	try {
		cout << "Division result: " << division(0.423, 43.0) << endl;
		cout << "Division result: " << division(2.12, 0.0) << endl;
	}
	catch (const char* excp) {
		cout << "Exception: " << excp << endl;
	}
	return 0;
}