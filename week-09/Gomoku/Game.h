#ifndef GAME_H
#define GAMEPLAY_H
#include "SDL_Engine.h"
#include "Board.h"

class Game {
private:
  Board* board;
  bool is_player1_turn;
  bool gameover;
public:
  Game();
  ~Game();
  virtual void init(SDL_Engine& context);
  virtual void render(SDL_Engine& context);
  void put_mark(SDL_Engine& context, int x, int y);
  bool is_vertical_5_done();
  bool is_horizontal_5_done();
  bool is_diagonal_5_dir1_done();
  bool is_diagonal_5_dir2_done();
  bool is_won();
};
#endif
