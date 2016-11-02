#include <iostream>

using namespace std;

int* resize(int* array, int oldSize, int newSize) {
  int* pointer = nullptr;
  pointer = new int[newSize];
  for (int i = 0; i < newSize; i++) {
    pointer[i] = 0;
  }
  if (newSize <= oldSize) {
    for (int i = 0; i < newSize; i++) {
        pointer[i] = array[i];
     }
  } else {
    for (int i = 0; i < oldSize; i++) {
      pointer [i] = array[i];
    }
  }
  return pointer;
}

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */



int main() {

  int oldSize = 10;
  int newSize = 12;
  int* array = new int[oldSize];
  for (int i = 0; i < oldSize; i++) {
    array[i] = i;
  }

  int* newarray = resize(array, oldSize, newSize);
  for (int i = 0; i < newSize; i++) {
    cout << newarray[i] << " ";
  }
  delete[] newarray;
  return 0;
}
