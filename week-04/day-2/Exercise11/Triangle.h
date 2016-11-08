#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <string>

using namespace std;

class Triangle {
  public:
    Triangle(int number);
    void print_triangle();
  private:
    int number;
  };

#endif /* TRIANGLE_H_ */
