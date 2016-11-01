#include <iostream>
#include <string>

using namespace std;

int char_counter(string word, char letter) {

  int numOfChar = 0;
  int length = sizeof(word) / sizeof(char);

  for(int i = 0; i < length; i++) {

    if(word[i] == letter) {

      numOfChar++;
      }
  }

  return numOfChar;
}

int main() {
  string word = "makkoshotyka-also";
  char letter = 'o';
  // Write a function that takes a string and a character, and counts how many
  // times the character occures in the string and it should return a number

  cout << char_counter(word, letter);

  return 0;
}
