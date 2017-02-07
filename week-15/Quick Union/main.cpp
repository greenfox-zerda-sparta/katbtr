#include "quickunion.h"
#include <iostream>

int main()
{
  QuickUnion quickunion = QuickUnion(10);
  std::vector<std::vector<int>> connections = { { 3, 4 },{ 4, 9 },{ 8, 0 },{ 2, 3 },{ 5, 6 },{ 5, 9 },{ 7, 3 },{ 4, 8 },{ 6, 1 } };
  for (std::vector<int> it : connections) {
    quickunion.unite(it[0], it[1]);
    std::cout << it[0] << "-" << it[1] << " ";
    quickunion.getGroups();
  }

  return 0;
}
