#include <iostream>

// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#define str(x) if(!(x)) (std::cout << "Some error message")

int main() {
    int x = 4;
    str(x > 5);

    return 0;
}