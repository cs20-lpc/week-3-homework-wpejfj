// TO DO:  Student class definition  here.

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include "Course.hpp"

class Student {
public:
  Student();
  Student(int i, std::string n, double g);

  int getId() const;
  std::string getName() const;
  double getGPA() const;

  void addCourse(std::string n, std::string l);
  void displayInfo() const;
  void displayCourses() const;
  
private:
  int id;
  std::string name;
  double gpa;
  Course* courseList;
};


#endif
