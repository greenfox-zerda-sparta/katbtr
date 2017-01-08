#include <vector>
#include <iostream>
#include "Employee.h"

#ifndef UNTITLED_COMPANY_H
#define UNTITLED_COMPANY_H


class Company {
protected:
    Employee* employee;
    std::vector<Employee*> employees;
    int money_balance;
public:
    Company();
    ~Company();
    void add_employee(Employee* employee);
    void add_revenue(int number);
    std::string get_best_employees_name();
    void give_bonuses();
    std::string get_company_status();
};


#endif //UNTITLED_COMPANY_H
