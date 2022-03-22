#include "Student.h"
#include <iostream>
#include<string>
using namespace std; 

// Assign studentId and name
Student::assignDetails(int SID,char sname[]) {
  studentid =SID;
  strcpy(name,sname);
}

// Display StudentId and Name
Student::display() {
  cout<<"Student Id : "<<studentid<<endl;
  cout<< "Name : "<<endl;
}
