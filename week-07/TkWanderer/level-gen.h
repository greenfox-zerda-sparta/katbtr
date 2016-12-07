#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int COVERABLE = 54;

void printLevel(bool level[10][10]) {
	cout << "--------------------------------------\n";
	for (int i = 0; i<10; ++i) {
		for (int j = 0; j<10; j++) {
			cout << (level[i][j] ? 'x' : ' ') << " ";
		}
		cout << "\n";
	}
}

//0-1,2-4,5-10,11-13, 14
const int STEPS[15] = { 3,3,4,5,4,4,4,5,5,5,5,5,6,6,6 };

void drawLevel(int x, int y, bool level[10][10], int covered) {
	if (!level[x][y]) {
		level[x][y] = 1;
		++covered;
	}
	if (covered >= COVERABLE) {
		return;
	}
	int stp = rand() % 15;
	int dir = rand() % 4;
	for (int i = 1; i <= STEPS[stp]; ++i) {
		if (dir == 0) { //right
			if (++x>9) {
				x = 9;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		}
		else if (dir == 1) { //down
			if (++y>9) {
				y = 9;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		}
		else if (dir == 2) { // left
			if (--x<0) {
				x = 0;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		}
		else { // up
			if (--y<0) {
				y = 0;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		}
		if (covered == COVERABLE) {
			return;
		}
		// Paraszt DEBUG
		//cout << "x: " << x << "  y: " << y<<endl;
	}
	drawLevel(x, y, level, covered);
	return; //for safety, shoud never reach this line anyways...
}



int main(int argc, char* argv[]) {
	srand(time(0));
	bool level[10][10];
	for (int i = 0; i<7; ++i) {
		zeroLevel(level);
		drawLevel(0, 0, level, 0);
		printLevel(level);
	}

	return 0;
}

