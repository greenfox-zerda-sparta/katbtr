#include <iostream>
#include <string>
#include <sstream> //for the function to_string's ostringstream
#include <cmath> //for power

using namespace std;

bool prime(int x) {

  bool isPrime = true;
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

string IntToString(int a) {

  ostringstream temp;
    temp << a;
    return temp.str();
}

string palindrome(string& input) {

  int length = input.length();
  string temp = "";
  for (int i = (length-1); i >= 0; i--) {
    temp = temp + input[i];
  }
  string output = temp;
  return output;
}

/* Option 1 with some unknown something
string toBinary(int n) {
    string r;
    while(n != 0) {
      r = (n %2 == 0 ? "0" : "1") + r; // I have no idea what this does
      n /= 2;
    }
    return r;
}
*/

//Option 2

string toBinary(int n) {
  int i, exp, extra;
  int x= 1;
  string binary = "";

  while(n >= 1){
    i = 0;
    exp = 1;
    while(n >= exp){
      i++;
      exp = pow(2,i);
    }
    x = 1;
    binary = binary + "1";
    n -= pow(2,i-x);
    extra = pow(2,i-1-x);
    while(n < extra){
      binary = binary + "0";
      x++;
      extra = pow(2,i-1-x);
    }
  }
  return binary;
}

int main() {

  //Create a function that list all prime palindrome numbers between 0 and 1000000
  //and stores it in an array, then prints the 3rd element of it this array in binary format.

  //It works until up to 1000 right now

  string str, rts;
  int array[1000];
//  for (int j = 0; j < 1000; j++) {
//    array[j] = 0;
//  }

  int counter = 0;
  for (int i = 0; i < 1000; i++) {
    if (prime(i) == true) {
      str = IntToString(i);
      rts = palindrome(str);
      if (str == rts) {
        array[counter] = i;
        counter++;
      }
    }
  }
  int element;
  cout << "Which element of the prime palindrome numbers array would you like to see?" << endl;
  cin >> element;
  string binary = toBinary(array[element]);
  cout << "Element " << element << " of the prime palindrome array is " << array[element] << " In binary this is " << binary << endl;
  return 0;
}
