#include <iostream>
using namespace std;

//Divides two floating point numbers
float divide(float a, float b) {

  float z;

  z = a / b;

  return z;

}

//Creates the reciproc of a floating point value
float reciproc(float a) {

  float z;

  z = 1 / a;

  return z;

}


int main(int argc, char** argv){
  //Implement the functions declared above.
  //Maybe You can use one function in the implementation of an other one...

  cout << "Dividing 1 by 4: " << divide(1, 4) << endl;
  cout << "Dividing 1.0 by 5.0: " << divide(1.0, 5.0) << endl;
  cout << "The repciproc of 6 is: " << reciproc(6) << endl;

  return 0;
}
