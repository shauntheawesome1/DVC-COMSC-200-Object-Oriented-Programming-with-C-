#include "Car.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Car::Car() {
	make = "";
	year = 0;
}

Car::Car(string m) {
	make = m;
	year = 0;
}

Car::Car(int y) {
	make = "";
	year = y;
}

Car::Car(string m, int y) {
	make = m;
	year = y;
}

void Car::setMake (string m) {
	make = m;
}

void Car::setYear (int y) {
	year = y;
}


#include "Car.h"
#include <iostream>
using namespace std;

int main() {

	Car myCar;
	myCar.setMake("Toyota");
	myCar.setYear(1999);

	cout << myCar.getMake() << " " << myCar.getYear() << endl;

	Car myCar2("Ford");
	cout << myCar2.getMake() << " " << myCar2.getYear() << endl;

	Car myCar3(2016);
	cout << myCar3.getMake() << " " << myCar3.getYear() << endl;

	Car myCar4("Honda", 2005);
	cout << myCar4.getMake() << " " << myCar4.getYear() << endl;

	return 0;
}