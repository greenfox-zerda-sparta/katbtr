#include <iostream>
#include <string>

using namespace std;

int main() {
  // Write a program that calculates all the possible combinations with rolling two dices.
  // It should print each value how many times occures.
  // for example 3 occures 2 times because 1 + 2 and 2 + 1

  int result[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  int sum;
  int variations = 0;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      variations++;
      sum = i + j;
      result[sum]++;
    }
  }

  int all = 13;
  cout << "The number of combinations: " << variations << endl;
  for (int i = 2; i < all; i++) {
    if (result[i] == 1) {
      cout << "For the sum " << i << " there is " << result[i] << " occurance." << endl;
    } else {
    cout << "For the sum " << i << " there are " << result[i] << " occurances." << endl;
    }
  }

  return 0;
}
