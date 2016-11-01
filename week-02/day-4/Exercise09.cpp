#include <iostream>
#include <string>

using namespace std;

void printDiamond(int x) {
  string star = "*";
  string space;
  if (x % 2 == 0){
    space = " ";
  } else {
    space = "";
  }
  for (int i = 0; i < x; i++) {
    if (i < x/2 ) {
      for (int j = x/2; j > i; j-- ) {
        cout << " ";
      }
      cout << star << endl;
      star += "**";
     } else {
       cout << space;
       space += " ";
       for (int k = 0; k < x-i-1; k++) {
         cout << "**";
       }
       cout << "*"<< endl;
    }
  }
 return;
}

int main() {
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument

	int lines;

	cout << "Please enter the number of lines: ";

	cin >> lines;

	printDiamond(lines);

  return 0;
}
