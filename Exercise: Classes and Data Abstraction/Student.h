#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    //pre:values are set, calls function
    //post: display student name and major
    void printInfo();
    //pre: display student name and major
    //post: returns the letter grade of a displayed score
    void GetLetterGrade();
    //Constructor
    Student(string n, string m);
    //returned string
    string getName();
    string getMajor();

private:
    string name;
    string major;
    int grade;
};

#endif // STUDENT_H_INCLUDED
