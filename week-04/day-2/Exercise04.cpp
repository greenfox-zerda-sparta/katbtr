#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }

    void namechange(string newname) {
    	this->name = newname;
    }
    string getName() {
      return name;
    }
    void setName(string x) {
      name = x;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property

	Student studentobj("John", 21);
	cout << studentobj.getName() << endl;
	studentobj.namechange("Joe");
	cout << studentobj.getName() << endl;


  return 0;
}
