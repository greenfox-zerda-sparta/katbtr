
#include <iostream>
#include <string>

using namespace std;

int number_of_horror_bunny_ears(int n) {
    int odd_ear = 0;
    int even_ear = 0;
    if (n == 1) {
        return 2;
    } else if (n % 2 != 0){
        odd_ear = 2 + number_of_horror_bunny_ears(n - 1);
    } else {
        even_ear = 3 + number_of_horror_bunny_ears(n - 1);
    }
    return odd_ear + even_ear;
}

int main() {
// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or
// multiplication).

    cout << number_of_horror_bunny_ears(4);

    return 0;
}