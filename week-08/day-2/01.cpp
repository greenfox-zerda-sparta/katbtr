#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    // Print the first 5 elements of the vector using iterators

    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.begin() + 5; iter++) {
        cout << *iter << endl;
    }

    return 0;
}