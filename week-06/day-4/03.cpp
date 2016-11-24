#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

    vector<int> v;
    v.reserve(10);
    int i = 0;
    while (i < 10) {
        v.push_back(rand() %11);
        i++;
    }
    for (unsigned int i = 0; i < 10; i++) {
        cout << v[i] << "|";
    }

  return 0;
}