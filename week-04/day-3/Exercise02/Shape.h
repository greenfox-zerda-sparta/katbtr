#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>

using namespace std;

class Shape {
  public:
    Shape();
    virtual string* getName();
};

#endif /* SHAPE_H_ */
