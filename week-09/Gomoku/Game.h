#ifndef GAME_H
#define GAMEPLAY_H
#include "SDL_Engine.h"
#include "Board.h"

class Game {
private:
  Board* board;
  bool is_player1_turn;
public:
  Game();
  ~Game();
  virtual void init(SDL_Engine& context);
  virtual void render(SDL_Engine& context);
  void put_mark(SDL_Engine& context, int x, int y);
};
#endif
