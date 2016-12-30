#ifndef BOARD_H
#define BOARD_H
#include <string>
#include <vector>

class Board {
  std::vector<std::vector<int>> map;
public:
  Board();
  ~Board();
  std::vector<std::vector<int>> get_map();
  void set_tile(int x, int y, int coord);
};
#endif
