// Using VS Code
//  Krysta Parker
//  CSC 210: Exercise: Classes and Data Abstraction
//  1/28/23
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

  Student info("Krysta", "Math");

info.printInfo(); //calls class function
info.GetLetterGrade();  //calls class function

  return 0;
}
