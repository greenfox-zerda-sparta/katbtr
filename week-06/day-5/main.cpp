#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>& vvv) {
    unsigned int size = vvv.size();
    for (unsigned int i = 0; i < size; i++) {
        cout << vvv[i];
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    vector<int> random_number(4);
    for (unsigned int i = 0; i < 4; i++) {
        random_number[i] = rand() %10;
    }

    print_vector(random_number);

    return 0;
}