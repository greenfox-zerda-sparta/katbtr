#include "game-engine.h"

class MyGame : public Game {
public:
	MyGame() {}
	virtual void init(GameContext& context) {
		context.load_file("floor.bmp");
	}
	virtual void render(GameContext& context) {
		context.draw_sprite("floor.bmp", 0, 0);
		context.draw_sprite("floor.bmp", 72, 0);
		context.render();
	}
};