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
      is_won();
    } else {
      board->set_tile(y, x, 2);
      is_player1_turn = true;
      is_won();
    }
  }
}

bool Game::is_vertical_5_done() {
  int counter1;
  int counter2;
  bool win = false;
  for (unsigned int col = 0; col < board->get_map().size(); col++) {
    for (unsigned int row = 0; row < board->get_map().size() - 4; row++) {
      if (board->get_map()[row][col] == 1) {
        counter1 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row + i][col] == 1) {
            counter1++;
          }
        }
        if (counter1 == 4) {
          win = true;
        }
      } else if (board->get_map()[row][col] == 2) {
        counter2 = 0;
         for (int i = 1; i < 5; i++) {
           if (board->get_map()[row + i][col] == 2) {
             counter2++;
           }
         }
         if (counter2 == 4) {
           win = true;
         }
      }
    }
  }
  return win;
}

bool Game::is_horizontal_5_done() {
  int counter1;
  int counter2;
  bool win = false;
  for (unsigned int col = 0; col < board->get_map().size() - 4; col++) {
    for (unsigned int row = 0; row < board->get_map().size(); row++) {
      if (board->get_map()[row][col] == 1) {
        counter1 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row][col + i] == 1) {
            counter1++;
          }
        }
        if (counter1 == 4) {
          win = true;
        }
      }
      else if (board->get_map()[row][col] == 2) {
        counter2 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row][col + i] == 2) {
            counter2++;
          }
        }
        if (counter2 == 4) {
          win = true;
        }
      }
    }
  }
  return win;
}

bool Game::is_diagonal_5_dir1_done() {
  int counter1;
  int counter2;
  bool win = false;
  for (unsigned int col = 0; col < board->get_map().size() - 4; col++) {
    for (unsigned int row = 0; row < board->get_map().size() - 4; row++) {
      if (board->get_map()[row][col] == 1) {
        counter1 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row + i][col + i] == 1) {
            counter1++;
          }
        }
        if (counter1 == 4) {
          win = true;
        }
      }
      else if (board->get_map()[row][col] == 2) {
        counter2 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row + i][col + i] == 2) {
            counter2++;
          }
        }
        if (counter2 == 4) {
          win = true;
        }
      }
    }
  }
  return win;
}

bool Game::is_diagonal_5_dir2_done() {
  int counter1;
  int counter2;
  bool win = false;
  for (unsigned int col = 0; col < board->get_map().size() - 4; col++) {
    for (unsigned int row = board->get_map().size() - 1; row > 3; row--) {
      if (board->get_map()[row][col] == 1) {
        counter1 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row - i][col + i] == 1) {
            counter1++;
          }
        }
        if (counter1 == 4) {
          win = true;
        }
      }
      else if (board->get_map()[row][col] == 2) {
        counter2 = 0;
        for (int i = 1; i < 5; i++) {
          if (board->get_map()[row - i][col + i] == 2) {
            counter2++;
          }
        }
        if (counter2 == 4) {
          win = true;
        }
      }
    }
  }
  return win;
}

bool Game::is_won() {
  if ( is_vertical_5_done() || is_horizontal_5_done() || is_diagonal_5_dir1_done() || is_diagonal_5_dir2_done() ) {
    return true;
  }
  return false;
}
