#include <iostream>

using namespace std;

void printTriangle (int lines) {

	int i, space, j;

	j = 0;

    for(i = 1; i <= lines; i++) {

        for(space = 1; space <= lines-i; space++) {

        	cout << " ";
        }

        while(j != 2*i-1) {

           cout << "*";

           ++j;
        }

        j = 0;
        cout << endl;
    }
 }

int main() {

  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

	  int x;

	  cout << "Please enter a number: ";

	  cin >> x;

	  printTriangle(x);

  return 0;

}
