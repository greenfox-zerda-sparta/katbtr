#include <iostream>

using namespace std;

void swap(int *num1, int *num2) {

  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;

}

int main() {
  int first = 12;
  int second = 54;

  // Write a function that takes two int pointers and swaps the values where the pointers point

      swap(first, second);

      cout << "first " << first << endl;
      cout << "second " << second << endl;

  return 0;
}
