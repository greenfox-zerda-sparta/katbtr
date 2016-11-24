#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector

  vector<char> v(0);

  cout << "How many characters would you like to add?" << endl;
  int num_chars;
  cin >> num_chars;
  for (unsigned int i = 0; i < num_chars; i++ ) {
    cout << "Enter your character: " << endl;
    char character;
    cin >> character;
    v.push_back(character);
  }

  cout << endl;

  for (unsigned int i = 0; i < num_chars; i++) {
    cout << v[i] << "|";
  }

  return 0;
}