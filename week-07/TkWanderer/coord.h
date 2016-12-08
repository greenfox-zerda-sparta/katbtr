#ifndef COORD_H_
#define COORD_H_

class Coord {
private:
	int x;
	int y;
public:
	bool operator == (const Coord&);
	void set_x(int x);
	void set_y(int y);
	int get_x();
	int get_y();
};

#endif /* COORD_H_ */
