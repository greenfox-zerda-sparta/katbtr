#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push and item to the end of the vector with the double places
	//print which vectors size is higher (and why?)

    vector<int> v_int(10);
    int i = 0;
    while (i < 10) {
        v_int.push_back(rand());
        i++;
    }
    vector<double> v_double;
    v_double.reserve(10);
    v_double.push_back(8);

    if (v_int.size() > v_double.size() ? cout << "Integer vector is bigger" : cout << "Double vector is bigger");

  return 0;
}