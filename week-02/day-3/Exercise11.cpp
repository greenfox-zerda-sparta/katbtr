#include <iostream>
using namespace std;

void sortAscending(int *array, int length) {
// Implement this function to sort the array in an ascending order.

    int *i, *j, temp;
    for (i = array; i < array + length; i++) {
        for (j = i + 1; j < array + length; j++) {
            if (*j < *i) {
                temp = *j;
                *j = *i;
                *i = temp;
            }
        }
    }
}

void sortDescending(int *array, int length) {
// Implement this function to sort the array in a descending order.

  int *i, *j, temp;
  for (i = array; i < array + length; i++) {
    for (j = i + 1; j < array + length; j++) {
      if (*j > *i){
        temp = *j;
        *j = *i;
        *i = temp;
      }
    }
  }
}


void printArray(int *array, int length) {
  cout << "{";
  for(int i=0; i<length; i++){
    cout << array[i];
    if(i<length-1) {
      cout << ", ";
    }
  }
  cout << "}" << endl;
}



int main(int argc, char** argv){
  int example[13] = {34, 56, 26, 84, 29, 3875, 43, 96, 4759, 979, 92, 56, 1987};
  sortAscending(example, 13);
  printArray(example, 13);
  sortDescending(example, 13);
  printArray(example, 13);

  return 0;
}
