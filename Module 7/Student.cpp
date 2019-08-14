#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string newName, int newId){
  setName(newName);
  setId(newId);
}

void Student::setName(string newName){
  name = newName;
}

void Student::setId(int newId){
  id = newId;
}

void Student::print(){
  cout << "Name: " << name << endl;
  cout << "ID Number: " << id << endl;
}