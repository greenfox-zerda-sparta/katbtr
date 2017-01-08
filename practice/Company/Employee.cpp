#include <iostream>
#include "Employee.h"
#include "tostring.h"

using namespace std;

Employee::Employee() {
    this->worked_hours = 0;
    this->base_salary;
    this->type = type;
}

Employee::Employee(string name, string type) {
    this->name = name;
    this->type = type;
}

Employee::~Employee() {

}

void Employee::raise() {
    base_salary += 5;
}

void Employee::work(int number) {
    try {
        worked_hours += number;
        if (number < 4) {
            throw "error";
        }
    } catch (const char* error) {
        cout << error;
    }
}

int Employee::pay() {
    int required_total_salary = base_salary * worked_hours;
    worked_hours = 0;
    return required_total_salary;
}

int Employee::get_worked_hours() {
    return worked_hours;
}

string Employee::get_name() {
    return name;
}

string Employee::get_status() {
    string status = "";
    status = "Name: " + name + ", Worked Hours: " + to_string(worked_hours) + ", Base Salary: " + to_string(base_salary) + "\n";
    return status;
}

int Employee::get_base_salary() {
    return base_salary;
}