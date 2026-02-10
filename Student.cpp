// TODO:  Student class methods implementation here.

#include <iostream>
#include "Student.hpp"

Student::Student() {
  id = 0;
  gpa = 0.0;
  courseList = nullptr;
}

Student::Student(int i, std::string n, double g) {
  id = i;
  name = n;
  gpa = g;
  courseList = nullptr;
}

int Student::getId() const {
  return id;
}

std::string Student::getName() const {
  return name;
}

double Student::getGPA() const {
  return gpa;
}

void Student::addCourse(std::string n, std::string l) {
  Course* a = new Course(n, l);

  if (!courseList) {
    courseList = a;
    return;
  }

  Course* temp = courseList;
  while (temp->next)
    temp=temp->next;

  temp->next = a;

}

void Student::displayInfo() const {
  std::cout << "ID: " << id << '\n';
  std::cout << "Name: " << name << '\n';
  std::cout << "GPA: " << gpa << '\n';
}

void Student::displayCourses() const {
  if (!courseList) {
    std::cout << "No Courses Found\n";
    return;
  }

  Course *temp = courseList;
  while (temp) {
    std::cout << temp->name << ' ' << temp->location << '\n';
    temp = temp->next;
  }
}


