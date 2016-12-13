#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;

  // Print all the keys and values of the map

    for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << ": " << iter->second << endl;
    }

  return 0;
}
