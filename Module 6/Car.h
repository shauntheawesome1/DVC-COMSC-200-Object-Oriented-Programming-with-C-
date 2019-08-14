//Car.h
/*
-----------------------
          Car
-----------------------
- make: string
- year : int
-----------------------
+ Car()
+ setMake(m: string) : void
+ getMake() : string
+ setYear(y: int) : void
+ getYear() : int
----------------------
*/
#ifndef CAR_H_INCLUDED__
#define CAR_H_INCLUDED__
#include <iostream>
using namespace std;

class Car {

	private:
    	string make;
    	int year;

	public:
    	void setMake (string);
    	string getMake() {return make;}
    	void setYear (int);
    	int getYear() {return year;}

};
#endif