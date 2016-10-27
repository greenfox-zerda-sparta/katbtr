#include <iostream>

using namespace std;

void printTriangle (int a) {

  string star = "*";

  cout << star << endl;

  for (int i = 1; i < a; i++) {

    star += "*";

    cout << star << endl;

  }

}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument

  int x;

  cout << "Please enter a number: ";

  cin >> x;

  printTriangle(x);

  return 0;
}
