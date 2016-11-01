#include <iostream>
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

int main(){
  int number = 121;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.

  if (prime(number) == true) {

    cout << "This is a prime number";
  } else {

    cout << "This is not a prime number";
  }

  return 0;
}
