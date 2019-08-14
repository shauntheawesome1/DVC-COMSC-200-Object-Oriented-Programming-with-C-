/*
---------------------------------
	GradStudent :: Student
---------------------------------
- string major;
- double gpa;
---------------------------------
+ GradStudent()
+ GradStudent(string, double, string, int)
+ setMajor(m: string) : void
+ getMajor() : string
+ setGpa(g: double) : void
+ getGpa() : double
---------------------------------*/
#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "Student.h"
#include <string>
using namespace std;

class GradStudent : public Student{
  private:
    string major;
	double gpa;
  public:
    GradStudent(){};
	GradStudent(string, int, string, double);
	void setMajor(string);
	string getMajor(){return major;}
	void setGpa(double);
	double getGpa(){return gpa;}
	void print();
};
#endif