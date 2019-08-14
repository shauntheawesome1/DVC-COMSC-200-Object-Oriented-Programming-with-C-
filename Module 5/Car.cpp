//Car.cpp
#include "Car.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Car::setMake (string m) {
	make = m;
}

void Car::setYear (int y) {
	year = y;
}

//CarDemo.cpp
#include "Car.h"
#include <iostream>
using namespace std;

int main() {

	Car myCar;
	myCar.setMake("Toyota");
	myCar.setYear(1999);

	cout << myCar.getMake() << endl;
	cout << myCar.getYear() << endl;

	return 0;
}