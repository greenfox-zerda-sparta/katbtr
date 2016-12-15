#include <iostream>
#include <string>

using namespace std;

int sum_digit(int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum_digit(n / 10) + n % 10;
    }
}

int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

    cout << sum_digit(312);

    return 0;
}