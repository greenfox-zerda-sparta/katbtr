#include "mygame.h"
#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int uint;

void MyGame::init(GameContext& context) {
	context.load_file("floor.bmp");
	context.load_file("wall.bmp");
	context.load_file("hero-down1.bmp");
	context.load_file("hero-up1.bmp");
	context.load_file("hero-left1.bmp");
	context.load_file("hero-right1.bmp");
	context.load_file("skeleton1.bmp");
	context.load_file("boss1.bmp");
}

void MyGame::render(GameContext& context) {
	for (uint i = 0; i < myBoard.size(); i++) {
		uint x = i * tile_width;
		for (uint j = 0; j < myBoard[i].size(); j++) {
			uint y = j * tile_height;
			context.draw_sprite((myBoard[i][j] ? "floor.bmp" : "wall.bmp"), x, y);
		}
	}
	context.draw_sprite(hero_direction, hero_position.get_x(), hero_position.get_y());
	for (int i = 0; i < character_count; i++) {
		if (i == 0) {
			context.draw_sprite("boss1.bmp", character_position[i].get_x(), character_position[i].get_y());
		}
		else {
			context.draw_sprite("skeleton1.bmp", character_position[i].get_x(), character_position[i].get_y());
		}
	}
	move_hero(context);
	context.render();
}

MyGame::MyGame() {
	myBoard = board(10, row(10, 0));
	drawLevel(0, 0, 0);
	hero_direction = "hero-down1.bmp";
	character_count = 4;
	character_position = vector<Coord>(character_count);
	for (int i = 0; i < character_count; i++) {
		character_position[i] = put_character();
	}
}

MyGame::~MyGame() {}

void MyGame::drawLevel(int x, int y, int covered) {
	if (!myBoard[x][y]) {
		myBoard[x][y] = 1;
		++covered;
	}
	if (covered >= COVERABLE) {
		return;
	}
	int stp = rand() % 15;
	int dir = rand() % 4;
	for (int i = 1; i <= STEPS[stp]; ++i) {
		if (dir == 0) { //right
			if (++x > board_cols - 1) {
				x = board_cols -1;
				dir = rand() % 4;
			}
			if (!myBoard[x][y]) {
				++covered;
				myBoard[x][y] = 1;
			}
		}
		else if (dir == 1) { //down
			if (++y > board_rows - 1) {
				y = board_rows - 1;
				dir = rand() % 4;
			}
			if (!myBoard[x][y]) {
				++covered;
				myBoard[x][y] = 1;
			}
		}
		else if (dir == 2) { // left
			if (--x < 0) {
				x = 0;
				dir = rand() % 4;
			}
			if (!myBoard[x][y]) {
				++covered;
				myBoard[x][y] = 1;
			}
		}
		else { // up
			if (--y < 0) {
				y = 0;
				dir = rand() % 4;
			}
			if (!myBoard[x][y]) {
				++covered;
				myBoard[x][y] = 1;
			}
		}
		if (covered == COVERABLE) {
			return;
		}
	}
	drawLevel(x, y, covered);
	return; //for safety, shoud never reach this line anyways...
}

void MyGame::move_hero(GameContext& context) {
	int x = hero_position.get_x() / tile_width;
	int y = hero_position.get_y() / tile_height;
	if (context.was_key_pressed(ARROW_DOWN)) {
		if (y < board_rows - 1 && myBoard[x][y + 1]) {
			hero_position.set_y(hero_position.get_y() + tile_height);
			hero_direction = "hero-down1.bmp";
		}
	}
	if (context.was_key_pressed(ARROW_UP)) {
		if (y > 0 && myBoard[x][y - 1]) {
			hero_position.set_y(hero_position.get_y() - tile_height);
			hero_direction = "hero-up1.bmp";
		}
	}
	if (context.was_key_pressed(ARROW_LEFT)) {
		if (x > 0 && myBoard[x - 1][y]) {
			hero_position.set_x(hero_position.get_x() - tile_width);
			hero_direction = "hero-left1.bmp";
		}
	}
	if (context.was_key_pressed(ARROW_RIGHT)) {
		if (x < board_cols - 1 && myBoard[x + 1][y]) {
			hero_position.set_x(hero_position.get_x() + tile_width);
			hero_direction = "hero-right1.bmp";
		}
	}
}

Coord MyGame::put_character() {
	Coord position;
	do {
		position.set_x((rand() % board_cols) * tile_width);
		position.set_y((rand() % board_rows) * tile_height);
	} while (!is_a_good_position(position));
	return position;
}

bool MyGame::is_a_good_position(Coord position) {
	int x = position.get_x() / tile_width;
	int y = position.get_y() / tile_width;
	if (!myBoard[x][y]) {
		return false;
	}
	for (int i = 0; i < character_count; i++) {
		if (character_position[i] == position) {
			return false;
		}
	}
	if (hero_position == position) {
		return false;
	}
	return true;
}