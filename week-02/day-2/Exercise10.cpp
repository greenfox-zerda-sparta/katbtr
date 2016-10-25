
#include <iostream>
#include <string>

using namespace std;

inline int dupli(int k) {

  k *= 2;

  return k;
}

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it

  cout << dupli(j);

  return 0;
}
