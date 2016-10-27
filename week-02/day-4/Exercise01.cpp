#include <iostream>
#include <string>

using namespace std;

void square(int array[], int size);

int main() {

  // Write a function that takes an array and squares all the elements in the array

    int array[] = {1, 2, 3, 4, 5, 6, 7};

    int x = sizeof(array)/sizeof(array[0]);

    square(array, x);

    for(i = 0; i < x; i++) {

        cout << array[i] << " ";
      }

}

void square(int array[], int size) {

    for(int i=0; i< size; i++) {

        array[i] *= array[i];

      }

}
