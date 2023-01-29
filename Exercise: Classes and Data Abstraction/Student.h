#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>

class Student{
public:
  //pre: constructor is declared
  //post: all given information of student is printed (not grades)
  void printInfo();
  //pre: constructor is declared
  //post: n and m vaules are set to private integers
  void setInfo(string n, string m);
  //pre: printInfo funtion display student info
  //post: returns the letter grade of a score
  void GetLetterGrade();
  //Constructor
  Student(string n = "", string m = "");
private:
  string name;
  string major;
  int grade;
};

#endif // STUDENT_H_INCLUDED
