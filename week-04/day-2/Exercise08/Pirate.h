#ifndef PIRATE_H_
#define PIRATE_H_
#include <string>

using namespace std;

class Pirate {
  public:
    Pirate();
    void drink_rum();
    string hows_going_mate();
  private:
    int counter;
};

#endif /* PIRATE_H_ */
