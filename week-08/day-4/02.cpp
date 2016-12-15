
#include <iostream>
#include <string>

using namespace std;

int adds_numbers(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + adds_numbers(n - 1);
  }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n

  cout << adds_numbers(9);

  return 0;
}
