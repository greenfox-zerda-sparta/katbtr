#ifndef QUICKUNION_H
#define QUICKUNION_H
#include <vector>

class QuickUnion {
private:
  int count;
  std::vector<int> parent;

public:
  QuickUnion(int);
  int get_count();
  int search(int);
  bool find(int, int);
  void unite(int, int);
  void getGroups();

};

#endif
