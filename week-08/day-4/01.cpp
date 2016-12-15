
#include <iostream>
#include <string>

using namespace std;

int count_down(int n) {
    while (n != -1) {
        cout << n << endl;
        n--;
        count_down(n);
        return n;
    }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n

    count_down(10);

    return 0;
}