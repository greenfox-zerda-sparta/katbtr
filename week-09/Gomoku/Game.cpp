#include "Game.h"
#include <iostream>

Game::Game() {
  board = new Board;
  is_player1_turn = true;
}

Game::~Game() {
  delete board;
}

void Game::init(SDL_Engine& context) {
  context.load_file("pics/tile2.bmp");
  context.load_file("pics/cross2.bmp");
  context.load_file("pics/circle2.bmp");
}

void Game::render(SDL_Engine& context) {
  for (unsigned int row = 0; row < 19; row++) {
    for (unsigned int col = 0; col < 19; col++) {
      switch (board->get_map()[row][col]) {
      case 0:
        context.draw_sprite("pics/tile2.bmp", col * 36, row * 36);
        break;
      case 1:
        context.draw_sprite("pics/cross2.bmp", col * 36, row * 36);
        break;
      case 2:
        context.draw_sprite("pics/circle2.bmp", col * 36, row * 36);
        break;
      }
    }
  }
  context.render();
}

void Game::put_mark(SDL_Engine& context, int x, int y) {
  if (board->get_map()[y][x] == 0) {
    if (is_player1_turn == true) {
      board->set_tile(y, x, 1);
      is_player1_turn = false;
    }
    else {
      board->set_tile(y, x, 2);
      is_player1_turn = true;
    }
  }
}
