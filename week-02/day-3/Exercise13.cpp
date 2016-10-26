#include <iostream>
#include <string>
//#include <sstream>
using namespace std;

// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!


/* Ez is működik, de <sstream> kellett hozzá.
void PrintWordNewLine(string Phrase) {

    istringstream iss(Phrase);

    do
    {
        string parts;
        iss >> parts;
        cout << parts << endl;
    } while (iss);
}
*/

void PrintWordNewLine(string Phrase) {

  string temp = "";

  for (int i = 0; i < Phrase.length(); i++) {

    temp += Phrase[i];

    if(Phrase[i] == ' ') {
      cout << temp << endl;
      temp = "";
    }
  }
  cout << temp;

}



int main(int argc, char **argv){

  string sentence = "Hát ez nagyon tuti!";

  PrintWordNewLine(sentence);

  return 0;
}
