/*
-----------------------------------
            Student
-----------------------------------
- name : string
- id : int
-----------------------------------
+ Student()
+ Student(string, int)
+ getName() : string
+ getId() : int
+ setName(n : string) : void
+ setId(i : int) : void
+ print() : void
-------------------------------------*/
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{
  private:
    string name;
    int id;
  public:
    Student(){};
	Student(string, int);
	string getName(){return name;}
	int getId(){return id;}
	void setName(string);
	void setId(int);
	void print();	
};
#endif