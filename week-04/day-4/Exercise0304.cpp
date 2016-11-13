#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//
class ParentClass {
  public:
    string get_string();
    virtual string get_other_string();
    ~ParentClass();
};

string ParentClass::get_string() {
  return "string in the parent";
}

string ParentClass::get_other_string() {
  return "other string in parent";
}

class ChildClass: public ParentClass {
  public:
    string get_string();
    virtual string get_other_string();
    ~ChildClass();
};

string ChildClass::get_string() {
  return "string in child";
}

string ChildClass::get_other_string() {
  return "other string in child";
}

int main() {

  ParentClass* a = new ChildClass();
  cout << a->get_string() << " " << a->get_other_string() << endl;
  cout << ((ChildClass*)a)->get_string() << " " << ((ChildClass*)a)->get_other_string() << endl;

  return 0;
}
