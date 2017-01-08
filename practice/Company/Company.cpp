#include <iostream>
#include <algorithm>
#include "Company.h"
#include "tostring.h"

using namespace std;

Company::Company() {
    money_balance = 5000;
}

void Company::add_employee(Employee* employee) {
    employees.push_back(employee);
}

void Company::add_revenue(int number) {
    money_balance += number;
}

string Company::get_best_employees_name() {

    if (employees.size() > 0) {
        int max_index = 0;
        int max_worked_hours = employees[0]->get_worked_hours();

        for (unsigned int i = 1; i < employees.size(); i++) {
            if ((int) employees[i]->get_worked_hours() > max_worked_hours) {
                max_worked_hours = employees[i]->get_worked_hours();
                max_index = i;
            }
        }

        return employees[max_index]->get_name();

    } else {
        return "";
    }
}

void Company::give_bonuses() {
    for (unsigned int i = 0; i < employees.size(); i++) {
        if (employees[i]->get_worked_hours() >= 100) {
            employees[i]->raise();
        }
    }
}

string Company::get_company_status() {
    string status = "";
    status =  "Balance: " + to_string(money_balance) + "\nEmployee Count: "
              + to_string(employees.size()) + "\nEmployees:" + "\n";
    for (unsigned int i = 0; i < employees.size(); i++) {
        status += employees[i]->get_status();
    }
    return status;
}


Company::~Company() {
    for (unsigned int i = 0; i < employees.size(); i++) {
        delete employees[i];
    }
}
