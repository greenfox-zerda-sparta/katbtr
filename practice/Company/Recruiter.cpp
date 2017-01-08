#include <iostream>
#include "Recruiter.h"

using namespace std;

Recruiter::Recruiter() {
    base_salary = 15;
    type = "Recruiter";
}

Recruiter::Recruiter(string name) {
    this->name = name;
    base_salary = 15;
    type = "Recruiter";
}

Recruiter::~Recruiter() {

}