#include <iostream>
#include <string>

using namespace std;

int main() {
  int f[] = {3, 4, 5, 6, 7};
  // Please double all the elements, than print all of them

  for (int i=0; i<5; i++) {

    f[i] = 2*f[i];

  }

  for (int j = 0; j < 5; j++) {

    cout << f[j] << endl;
  }

  return 0;
}
