#include <iostream>
#include <vector>

using namespace std;

// create a function that prints a vector using iterators

void print_vector_by_iter(vector<int>& vector) {
    std::vector<int>::iterator iter;
    for (iter = vector.begin(); iter != vector.end(); iter++) {
    cout << *iter << endl;
    }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  print_vector_by_iter(v);

  return 0;
}