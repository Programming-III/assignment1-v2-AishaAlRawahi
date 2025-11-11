#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student : public Person{
  private: 
    int yearLevel;
    string major;
  
  public:
    void display(){}
    Student(){}
    Student(string n, int i, int y, string m) :: Person(n, i){}
    ~Student(){}
};

#endif
