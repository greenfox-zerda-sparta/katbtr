#ifndef GOMOKU_H
#define GOMOKU_H
#include "SDL_Engine.h"
#include "Game.h"

class Gomoku {
private:
  Game* game;
  SDL_Engine* context;
  SDL_Event event;
  bool quit;
public:
  Gomoku();
  ~Gomoku();
  void run();
};
#endif
