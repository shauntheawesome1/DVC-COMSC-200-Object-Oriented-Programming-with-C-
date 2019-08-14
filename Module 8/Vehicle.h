/*----------------------------
Vehicle
----------------------------
- year : int
- mileage : int
----------------------------
+ Vehicle()
+ Vehicle(int, int)
+ print() : void
+ setYear(y : int) : void
+ setMileage(m : int) : void
----------------------------*/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {

  private:
    int year;
    int mileage;
		
  public:
	Vehicle(){};
	Vehicle(int, int);
	void print();
	void setYear (int);
	void setMileage (int);
};
Vehicle::Vehicle(int newYear, int newMileage) {
  setYear(newYear);
  setMileage(newMileage);
}

void Vehicle::setYear(int newYear){
  year = newYear;
}

void Vehicle::setMileage(int newMileage){
  mileage = newMileage;
}

void Vehicle::print(){
  std::cout << "Information about Vehicle: " << std::endl;
  std::cout << "Year: " << year << std::endl;
  std::cout << "Mileage: " << mileage << std::endl;
}
#endif