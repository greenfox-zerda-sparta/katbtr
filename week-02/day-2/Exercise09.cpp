#include <string>

using namespace std;

inline string greet(string name) {

  string x = "Hello ";

  x += name;

  x += "!";

  return x;
}

int main() {
  string i = "Jozsi";
  // create a function that takes a string argument and greets it.

  cout << greet(i) << endl;

  return 0;
}
