#include "Sedan.h"
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>
//#include <string>

using namespace std;

Sedan::Sedan(){
  
}
Sedan::Sedan(int newDoors, int newYear, int newMileage, bool newHatchBack){
  setDoors(newDoors);
  setHatchBack(newHatchBack);
  Vehicle::setYear(newYear);
  Vehicle::setMileage(newMileage);
}
void Sedan::print(){
  cout << "Information about Vehicle: " << endl;
  Vehicle::print();
  cout << "Doors: " << doors << endl;
  cout << "HatchBack: " << hatchback << endl;
}
void setDoors(int newDoors){
  doors = newDoors;
}
void setHatchBack(bool status){
  hatchback = status;
}