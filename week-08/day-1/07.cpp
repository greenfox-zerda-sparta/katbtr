#include <iostream>

// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#define myfunction(x) (x)

int main() {

    std::cout << myfunction("Something") << std::endl;

    return 0;
}