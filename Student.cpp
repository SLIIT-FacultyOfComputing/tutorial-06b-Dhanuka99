#include "Student.h"
#include <iostream>
#include <cstring>
// Assign studentId and name
void Student::assignDetails(int id,char studentName[]) {
  
  studentId=id;
  strcpy(name,studentName);
}

// Display StudentId and Name
void Student::display() {
std::cout<<studentId;
std::cout<<name;
}
