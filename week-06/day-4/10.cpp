#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ascending_vector(int i, int j) {
    return i < j;
}

int main() {
	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

    int division_counter = 0;
    for (int i = 1; i < 2401; i++) {
        if (2400 %i == 0) {
        division_counter++;
        }
    }
    vector<double> v(division_counter);
    for (unsigned int i = 0; i < division_counter; i++) {
        v[i] = rand() %2401;
    }
    sort(v.begin(), v.end(), ascending_vector);
    for (unsigned int i = 0; i < division_counter; i++) {
        cout << v[i] << "|";
    }

  return 0;
}