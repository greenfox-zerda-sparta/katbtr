#include <iostream>
#include "Developer.h"

using namespace std;

Developer::Developer() {
    base_salary = 20;
    type = "Developer";
}

Developer::Developer(string name) {
    this->name = name;
    base_salary = 20;
    type = "Developer";
}

Developer::~Developer() {

}
