#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.h"
#include "util.h"
#include "coord.h"
#include <vector>

typedef std::vector<bool> row;
typedef std::vector<row> board;

const int COVERABLE = 54;

class MyGame : public Game {
public:
	MyGame();
	~MyGame();
	void init(GameContext& context);
	void render(GameContext& context);
private:
	board myBoard;
	Coord hero_position;
	std::string hero_direction;
	void drawLevel(int x, int y, int covered);
	void move_hero(GameContext& context);
};

#endif /* MYGAME_H_ */