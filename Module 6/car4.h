/*
-----------------------
          Car
-----------------------
- make: string
- year : int
- speed: int
-----------------------
+ Car(string, int)
+ setMake(m: string) : void
+ getMake() : string
+ setYear(y: int) : void
+ getYear() : int
+ setSpeed(s: int) : void
+ getSpeed() : int
+ accelerate() : void
+ brake() : void
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
		int speed;
		
	public:
		//Car(string,int);
		//Car(string);
		//Car(int);
		Car(string, int);
		void setMake (string);
		string getMake() {return make;}
		void setYear (int);
		int getYear() {return year;}
		void setSpeed (int);
		int getSpeed(){return speed;}
		void accelerate();
		void brake();

};
#endif