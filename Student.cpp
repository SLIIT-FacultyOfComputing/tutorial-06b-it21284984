#include "Student.h"
#include <iostream>
#include<string>
using namespace std; 

// Assign studentId and name
Student::assignDetails(int SID,char sname[]) {
  studentId =SID;
  strcpy(name,sname);
}

// Display StudentId and Name
Student::display() {
  cout<<"Student Id : "<<studentId<<endl;
  cout<< "Name : "<<endl;
}
