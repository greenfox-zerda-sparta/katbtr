#ifndef CAR_H_
#define CAR_H_
#include <string>

using namespace std;

class Car {
  public:
    Car(string type, int km);
    void run(int run);
    int get_km();
  private:
    string type;
    int km;
};

#endif /* CAR_H_ */
