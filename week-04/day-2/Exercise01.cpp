#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  Student studentobj;

  studentobj.name = "John";
  studentobj.age = 21;

  cout << studentobj.name << " " << studentobj.age;

  return 0;
}
