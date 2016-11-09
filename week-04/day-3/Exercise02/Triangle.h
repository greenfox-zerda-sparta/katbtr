#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <iostream>
#include <string>

using namespace std;

class Triangle: public Shape {
  public:
    Triangle();
    string* getName();
};

#endif /* TRIANGLE_H_ */
