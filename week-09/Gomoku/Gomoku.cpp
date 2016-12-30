#include <iostream>
#include "Gomoku.h"

Gomoku::Gomoku() {
  game = new Game();
  context = new SDL_Engine();
  game->init(*context);
  SDL_Event event;
  quit = false;
}

Gomoku::~Gomoku() {
  delete game;
  delete context;
}

void Gomoku::run() {
  while (!quit) {
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    case SDL_KEYDOWN:
      switch (event.key.keysym.sym) {
      case SDLK_ESCAPE:
        quit = true;
        break;
      }
    case SDL_MOUSEBUTTONDOWN:
 //     if (event.button.x < 684 && event.button.y < 684 && game->is_gameover() == 0) {
      while (game->is_won() == false) {
        game->put_mark(*context, event.button.x / 36, event.button.y / 36);
        break;
      }
    }
    game->render(*context);
  }
}
