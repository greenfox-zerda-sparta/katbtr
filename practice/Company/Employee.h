
#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H


class Employee {
private:
    int worked_hours;
protected:
    std::string name;
    int base_salary;
    std::string type;
public:
    Employee();
    Employee(std::string name, std::string type);
    ~Employee();
    void raise();
    void work(int number);
    int pay();
    int get_worked_hours();
    std::string get_name();
    std::string get_status();
    int get_base_salary();

};


#endif //UNTITLED_EMPLOYEE_H
