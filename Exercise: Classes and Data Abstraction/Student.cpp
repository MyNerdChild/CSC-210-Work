#include "Student.h"
#include <string.h>
#include <iostream>

using namespace std;

void Student::printInfo()
{
  cout << "Name: " << name;
  cout << "Major: "<< major;
  cout << "Grades" << endl
       << "---------"<< endl;
}
void Student::setInfo(string n, string m)
{
  string name = n;
  string major = m;
}
void Student::GetLetterGrade()
{
  int g[5];
  char letter;

  srand(time(0));

  for (int i = 0; i < 5; i++)
    g[i] = (rand() % (100-1) + 1);

  for (int i = 0; i < 5; i++)
  {
    if (g[i] > 89)
    {
      cout << g[i] << "/A";
    }
    else if (g[i] > 79)
    {
      cout << g[i] << "/B";
    }
    else if (g[i] > 69)
    {
      cout << g[i] << "/C";
    }
    else if(g[i] > 59)
    {
      cout << g[i] << "/D";
    }
    else
    {
      cout << g[i] << "/F";
    }
  }
}

//Constructor
Student::Student(string n, string m)
{
  string name = n;
  string major = m;
}
