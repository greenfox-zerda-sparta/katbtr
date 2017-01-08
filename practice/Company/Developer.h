#include <iostream>
#include "Employee.h"

#ifndef UNTITLED_DEVELOPER_H
#define UNTITLED_DEVELOPER_H

class Developer : public Employee {
public:
    Developer();
    Developer(std::string name);
    ~Developer();
};


#endif //UNTITLED_DEVELOPER_H
