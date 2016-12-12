#include <iostream>

using namespace std;

// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#ifdef __DEBUG__
#define str(x) "DEBUG: " #x
#else
#define str(x) "RELEASE: " #x
#endif


int main() {
    std::cout << str("Valami") << std::endl;

    return 0;
}