#include "coord.h"
void Coord::set_x(int x) {
	this->x = x;
}

void Coord::set_y(int y) {
	this->y = y;
}

int Coord::get_x() {
	return x;
}

int Coord::get_y() {
	return y;
}

bool Coord::operator == (const Coord& other_point) {
	if (x == other_point.x && y == other_point.y) {
		return true;
	}
	return false;
}