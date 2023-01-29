#include "Student.h"
#include <iostream>


//Constructor
Student::Student(string n, string m)
{
    name = n;
    major = m;
}

void Student::printInfo(){

    cout << "Name: " << getName() << endl
         << "Major: "<< getMajor()<< endl
         << "Grades" << endl
         << "---------"<< endl;
}

void Student::GetLetterGrade()
{
    int g[5];

    srand(time(0));

    for (int i = 0; i < 5; i++)
        g[i] = (rand() % (100-1) + 2);

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
        cout << endl;
    }
}

string Student::getName() {
    return name;
}

string Student::getMajor() {
    return major;
}
