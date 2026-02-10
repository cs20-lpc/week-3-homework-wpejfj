
#include <iostream>
#include <string>
#include "Student.hpp"
#include "Course.hpp"
#include "LinkedList.hpp"
// TO DO:
// If you want to use the LinkedList code you wrote in Week 4 Mon Lab for creating list
// include LinkedList.hpp here and also add it both LinkedList.hpp and LinkedList.tpp to this repository.

using namespace std;

int main()
{
  // TO DO: Insert your code to display a menu for user to select to add/delete/view Student and course information.

  LinkedList<Student> a;
  int c;

  do {
    std::cout << "\n1. Insert Student\n2. Delete Student\n3. Search Student\n4. Display All\n5. Count Students\n6. Add a course\n7. Exit\n";

    std::cin >> c;

    if (c == 1) {
      int id; 
      std::string name;
      double gpa;

      std::cout << "Enter ID: ";
      std::cin >> id;

      std::cout << "Enter Name: ";
      std::cin >> name;

      std::cout << "Enter GPA: ";
      std::cin >> gpa;

      a.append(Student(id, name, gpa));
      
    }
    else if (c == 2) {
      int id;
      std::cout << "Enter ID to delete: ";
      std::cin >> id;
 
      if (a.remove(id))
	std::cout << "Deleted Student " << id << '\n';
      else
	std::cout << "Student not found\n";
    }
    else if (c == 3) {
      int id;
      std::cout << "Enter ID: ";
      std::cin >> id;

      Node<Student> *s = a.search(id);

      if (s) {
	s->data.displayInfo();
	std::cout << "Courses:\n";
	s->data.displayCourses();
      }
      else {
	std::cout << "Student not found\n";
      }
    }
    else if (c == 4) {
      a.display();
    }
    else if (c == 5) {
      std::cout << "Student count: " << a.count() << '\n';
    }
    else if (c == 6) {
      int id;
      std::string title;
      std::string l;
       
      std::cout << "Enter ID: ";
      std::cin >> id;
      std::cin.ignore();

      std::cout << "Enter Course Name: ";
      std::getline(std::cin, title);

      std::cout << "Enter location: ";
      std::getline(std::cin, l);

      Node<Student> *s = a.search(id);

      if (s)
	s->data.addCourse(title, l);
      else
	std::cout << "Student not found\n";
    }

  } while (c != 7);

  return 0;
}
