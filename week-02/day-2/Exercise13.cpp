#include <iostream>
#include <string>

using namespace std;

int fact(int n);

int main() {
  // create a function that returns it's input factorial

  int inp = 3;
  cout << fact(inp) << endl;

  return 0;
}

int fact(int n) {

  if ( n == 1 )
    return 1;
  else
    return n * fact(n-1);
}
