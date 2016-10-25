#include <iostream>
#include <string>

using namespace std;

inline string kieg(string dawg) {

  string x = "";

  x += dawg;

  x += "a";

  return x;

}

int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end

  cout << kieg(k) << endl;

  return 0;
}
