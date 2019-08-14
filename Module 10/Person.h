/*
--------------------------------
		   Person
--------------------------------
- int : identity
- Date : birthdate
--------------------------------
+ Person()
+ Person(int, Date);
+ getIdentity() : int
+ setIdentity(i: int) : void
+ print() : void
--------------------------------*/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Person{
  private:
	int identity;
	Date birthdate;
	
  public:
	Person() : birthdate(){
	  setIdentity(000000000);
	}
	Person(int newIdentity, Date bd) : birthdate(bd){
	  setIdentity(newIdentity);
	}
	
	int getIdentity(){return identity;}
	void setIdentity(int newIdentity){identity = newIdentity;}
	
	void print(){
	  cout << "SSN Number for Identity: " << getIdentity() << endl;
	  birthdate.print();	
	}
	
};
#endif