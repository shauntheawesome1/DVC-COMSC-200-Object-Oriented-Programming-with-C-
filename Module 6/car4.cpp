#include "car3.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(string m, int y) {
	make = m;
	year = y;
	speed = 0;
}

void Car::setMake (string m) {
	make = m;
}

void Car::setYear (int y) {
	year = y;
}

void Car::accelerate(){
	cout << "ACCELERATING......" << endl;
	speed = speed + 5;
	cout << make << " | " << year << " | " << speed + " mph" << endl;
}

void Car::brake(){
	cout << "BRAKING......" << endl;
	speed = speed - 5;
	if(speed < 0){
		cout << "ERROR: SPEED BEFORE BRAKING CAN NOT BE LESS THAN FIVE" << endl;
		speed = 0;
	}else{
		cout << make << " | " << year << " | " << speed << endl;
		
	}
	
}