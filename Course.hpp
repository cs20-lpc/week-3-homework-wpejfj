// TODO:  Course class definitins go here.
#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>

class Course {
public:
  Course(std::string n, std::string l);
  
  std::string name;
  std::string location;
  Course* next;
};

#endif
