#include "quickunion.h"
#include <iostream>

QuickUnion::QuickUnion(int array_length){
  count = array_length;
  for (int i = 0; i < count; i++) {
    parent.push_back(i);
  }
}

int QuickUnion::get_count() {
  return count;
}

int QuickUnion::search(int p) {
  while (p != parent[p]) {
    parent[p] = parent[parent[p]];
    p = parent[p];
  }
  return p;
}

bool QuickUnion::find(int p, int q) {
  return search(p) == search(q);
}

void QuickUnion::unite(int p, int q) {
    parent[search(p)] = search(q);
}

void QuickUnion::getGroups() {
  for (auto i : parent) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
