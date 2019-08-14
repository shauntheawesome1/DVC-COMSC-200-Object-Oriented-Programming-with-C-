#include "Student.h"
#include "Student.cpp"
#include "GradStudent.h"
#include "GradStudent.cpp"
#include <iostream>
using namespace std;

int main(){
  /*Student s1;
  Student s2("Shaun", 185188);
  s2.print();
  s1.print();*/
  
  const int MAX_STUDENTS = 10;
  //Student students[MAX_STUDENTS];
  Student honors[MAX_STUDENTS] = {
	Student("Shaun", 185188),
	Student("Neha", 183456),
	Student("Akanksha", 176573),
	Student()
  };
  for(int i = 0; i < MAX_STUDENTS; i++){
	honors[i].print();
  }  
  
  /*GradStudent g1;
  GradStudent g2("Dillon", 023405, "Computer Science", 4.0);
  g1.print();
  g2.print();*/
  
  
  
  
}
  
