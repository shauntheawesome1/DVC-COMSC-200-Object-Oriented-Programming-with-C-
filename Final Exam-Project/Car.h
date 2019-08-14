/*
------------------------------
			Car
------------------------------
- string : licensePlate
- bool : arrival
- int : distance
------------------------------
+ Car()
+ Car(string, bool, int)
+ getLicensePlate() : string
+ setLicensePlate(l: string) : void
+ getArrival() : bool
+ setArrival(a: bool) : void
+ getDistance() : int
+ setDistance(d: int) : void
+ print() : void
------------------------------*/
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car{
  private:
	string licensePlate;
	bool arrival;
	int distance;
	
  public:
	Car(){
	  setLicensePlate("");
	  setArrival(false);
	  setDistance(0);
	}
	Car(string newLicensePlate, bool newArrival, int newDistance){
	  setLicensePlate(newLicensePlate);
	  setArrival(newArrival);
	  setDistance(newDistance);		
	}
	
	string getLicensePlate(){return licensePlate;}
	void setLicensePlate(string newLicensePlate){licensePlate = newLicensePlate;}
	bool getArrival(){return arrival;}
	void setArrival(bool newArrival){arrival = newArrival;}
	int getDistance(){return distance;}
	void setDistance(int newDistance){distance = newDistance;}
	
	void print(){
	  cout << "\t > Car License Plate: " << getLicensePlate() << endl;
	  cout << "\t > Food to Car: ";
	  if(getArrival() == true){
		cout << "Arrived" << endl;
	  }else{
		 cout << "Not Arrived" << endl;
	  }
	  cout << "\t > Distance Away " << getDistance() << " miles"<< endl;
	  cout << "----------------------------------------------------------------------" << endl;
	  cout << "\n\n";
	}
};
#endif