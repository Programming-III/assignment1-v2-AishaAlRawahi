#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

void Person :: display(){
  cout << "Name: " << name << endl;
  cout << "ID: " << id << endl;
}

Person :: Person(string n, int i){
  name = n;
  id = i;
}


// ==================== Student Class Implementation ====================

void Student :: display(){
  Person :: display();
  cout << "Year Level: " << yearLevel;
  cout << "Major: " << major;
}

Student :: Student(string n, int i, int y, string m) :: Person(n, i){
  yearLevel = y;
  major = m;
}

// ==================== Instructor Class Implementation ====================

void Instructor :: display(){
  Person :: display();
  cout << "Department: " << department;
  cout << "Years of Experience: " << experienceYears;
}

Instructor :: Instructor(string n, int i, string d, int e) :: Person(n, i){
  department = d;
  experienceYears = e;
}


// ==================== Course Class Implementation ====================

Course :: Course(string cc, string cn, int ms){
  courseCode = cc;
  courseName = cn;
  maxStudents = ms;
  currentStudents = 0;
  students = new int[maxStudents];
}


void Course :: addStudent(const Student& s){
  if(currentStudents < maxStudents){
    students[currentStudents] = s;
    currentStudents++;
  }
}

void Course :: displayCourseInfo(){
  cout << "Course: " << courseCode << " - " << courseName << endl;
  cout << "Max Students: " << maxStudents;
 cout << "Currently Enrolled: ";
  for(int i = 0 ; i < currentStudents; i++){
    cout << "Student " << i+1;
    student[i].display();
    
  }
}


// ==================== Main Function ====================
int main() {
    Course c = Course("CS101", "Introduction to Programming", 3)
  c.displayCourseInfo();
  Instructor i = ("Dr. Lina Khaled", 222, "Computer Science", 5);
  i.display();
  Student s = ("Omar Nabil", 2202, 2, "Informatics");
  c.addStudent(s);
  c.display();
    
    return 0;
}
