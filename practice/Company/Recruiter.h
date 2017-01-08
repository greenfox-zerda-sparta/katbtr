#include <iostream>
#include "Employee.h"

#ifndef UNTITLED_RECRUITER_H
#define UNTITLED_RECRUITER_H


class Recruiter : public Employee {
public:
    Recruiter();
    Recruiter(std::string name);
    ~Recruiter();
};


#endif //UNTITLED_RECRUITER_H
