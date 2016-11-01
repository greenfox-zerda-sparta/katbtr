#include <iostream>
#include <string>

using namespace std;

string palindrome(string& input) {
  int length = input.length();
  string temp = "";
  for (int i = (length-1); i >= 0; i--) {
    temp = temp + input[i];
  }
  string output = temp;

  return output;
}

int main() {

  string input;
  cout << "Please enter the sentence you'd like to have the palindrome of: " << endl;
  getline (cin, input);
  cout << "Your palindrome is: " << palindrome(input) << endl;

  return 0;
}
