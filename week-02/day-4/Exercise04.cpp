#include <iostream>

using namespace std;

void reverseArray(int array[], int size);

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

  // Write a function that takes an array and its length than reverses the array

  int x = sizeof(array)/sizeof(array[0]);

  reverseArray(array, x);

  for(int i = 0; i < x; i++) {

      cout << array[i] << " ";
  }

  return 0;
}

void reverseArray(int array[], int size){

  for(int i=0; i < size / 2; i++) {

    int temp = array[i];

    array[i] = array[size-1-i];

    array[size-1-i] = temp;

  }
}
