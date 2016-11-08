#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student() {
  arraysize = 0;
};
void Student::add_grade(int grade) {
  gradearr[arraysize] = grade;
  arraysize++;
};
float Student::get_average() {
  float sum = 0;
  for (int i = 0; i < arraysize; i++) {
    sum += gradearr[i];
  }
  return sum / arraysize;
};
