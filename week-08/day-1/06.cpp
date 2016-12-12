#include <iostream>
#include <cstdlib>

using namespace std;

// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.

#define MY_PI 3.14

int main() {

    int array[5];
    for (int i = 0; i < 5; i++) {
        array[i] = rand() % 50;
        cout << "Radius " << i << " : " << array[i] << " | ";
        cout << "Circumference " << i << " : " << 2 * MY_PI * array[i] << " | ";
        cout << "Area " << i << " : " <<  MY_PI * array[i] * array[i] << " | ";
        cout << endl;
    }

    return 0;
}