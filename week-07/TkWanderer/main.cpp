#include <iostream>
#include "game-engine.h"
#include "mygame.h"

using namespace std;

int main(int argc, char* argv[]) {
	MyGame game;
	GameEngine engine(&game, 720, 720);
	engine.run();
	return 0;
}