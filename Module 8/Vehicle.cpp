#include "Vehicle.h"
#include <iostream>
#include <string>

//using namespace std;
using std::cout;
using std::endl;


//Vehicle::Vehicle() {
  //setYear(2019);
  //setMileage(40000);
//}

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