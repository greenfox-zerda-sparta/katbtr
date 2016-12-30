#include "Board.h"

Board::Board() {
  map = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));;
}

Board::~Board() {
}

std::vector<std::vector<int>> Board::get_map() {
  return map;
}

void Board::set_tile(int x, int y, int coord) {
  map[x][y] = coord;
}
