#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include <string>

using namespace std;

class Square: public Shape {
  public:
    Square();
    string* getName();
};

#endif /* SQUARE_H_ */
