#include <iostream>
#include <string>

using namespace std;

int big_floppy_ears(int n) {
    if (n == 1) {
        return 2;
    } else {
        return 2 + big_floppy_ears(n - 1);
    }
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

    cout << big_floppy_ears(12);

    return 0;
}