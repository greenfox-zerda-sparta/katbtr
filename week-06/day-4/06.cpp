#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_to_random(vector<double>& vector1) {
    int size = int(vector1.size());
    int random_position = rand() %size;
    vector1[random_position] += vector1.back();
    vector1.pop_back();
}

int main() {
    //create a vector of doubles with the size of 30, with every element equal of 1.5
    //create functions that takes this vector, pick the last element of it and adding its value to
    //an other item from the vector(this item place is random) and remove the last element at the end
    //run this function 20 times, then print every element of the vector

    vector<double> v(30, 1.5);

    for (int i = 0; i < 20; i++) {
        add_to_random(v);
    }
    unsigned int size = v.size();
    for (unsigned int i = 0; i < size; i++) {
        cout << v[i] << "|";
    }
    return 0;
}