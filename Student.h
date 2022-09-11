#include <iostream>


class Student
{
public:
  Student();
  //Constructor
  void info(std::string n, std::string m); 
  void GetLetterGrade(int score);
  //returns the letter grade of a score using the following grading scale:

private:
  std::string name;
  std::string major;
  int grade;
};


/*
A = 100 – 90
B = 89 – 80
C = 79 – 70
D = 69 – 60
F = 59 - 0




#ifndef STUDENT_H
#define STUDENT_H
#endif //STUDENT_H
*/
