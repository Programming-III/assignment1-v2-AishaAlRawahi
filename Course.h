#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class Course{
  private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students; //dynamically allocated array
    int currentStudents;
  
  public:
    void addStudent(const Student& s){}
    void displayCourseInfo(){}
    Course(string cc, string cn, int ms){}
    ~Course(){}
};

#endif
