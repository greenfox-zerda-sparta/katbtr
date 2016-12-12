#include <iostream>

// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.

#include <iostream>

using namespace std;

#define myfunction(x) if(!(x)) {cout << "The expression in the argument: " << (x) << ", in: " << __FILE__ << ", at: " << __LINE__ << endl;}

int main() {
    int x = 4;
    myfunction(x > 5);

    return 0;
}