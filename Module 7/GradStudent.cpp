#include "GradStudent.h"
#include <iostream>
#include <string>
using namespace std;

GradStudent::GradStudent(string newName, int newId, string newMajor, double newGpa) : Student(newName, newId){
  setMajor(newMajor);
  setGpa(newGpa);
}

void GradStudent::setMajor(string newMajor){
  major = newMajor;
}

void GradStudent::setGpa(double newGpa){
  gpa = newGpa;
}

void GradStudent::print(){
  Student::print();
  cout << "Major: " << major << endl;
  cout << "GPA: " << gpa << endl;
}
