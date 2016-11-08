#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>

using namespace std;

class Student {
  public:
    Student();
    void add_grade(int grade);
    float get_average();
  private:
    int grade;
    int gradearr[10];
  int arraysize;
};

#endif /* STUDENT_H_ */
