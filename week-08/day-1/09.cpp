#include <iostream>

// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#define str(x) if(x) (std::cout << "File: " << __FILE__ << " | Line: " << __LINE__)

int main() {
    int x;
    str(x);

    return 0;
}