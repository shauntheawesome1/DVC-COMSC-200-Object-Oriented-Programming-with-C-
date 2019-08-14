/*
---------------------------------------------------
	 KitchenDelivery::FoodCompany,TechCompany
---------------------------------------------------	
- Car : delivery
- int : driverPhone
- string : website
---------------------------------------------------	
+ KitchenDelivery()
+ KitchenDelivery(string, float, float, float, bool, string, float, bool, int, Car, int, string)
+ getDriverPhone() : int
+ setDriverPhone(d: int) : void
+ getWebsite() : string
+ setWebsite(w: string) : void
+ print() : void
---------------------------------------------------*/
#ifndef KITCHENDELIVERY_H
#define KITCHENDELIVERY_H
#include "FoodCompany.h"
#include "TechCompany.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

class KitchenDelivery : public FoodCompany, TechCompany{
  private:
	Car delivery;
	int driverPhone;
	string website;
	
  public:
	KitchenDelivery() : FoodCompany(), TechCompany(), delivery(){
	  setDriverPhone(0);
	  setWebsite("");
	}
	KitchenDelivery(string newName, float newRevenue, float newExpenses, float newHourlyWage, bool newFdaApproval, string newFarm, float newYearlyWage, bool newInternships, int newNumComputers, Car c, int newDriverPhone, string newWebsite) : FoodCompany(newName, newRevenue, newExpenses, newHourlyWage, newFdaApproval, newFarm), TechCompany(newName, newRevenue, newExpenses, newYearlyWage, newInternships, newNumComputers), delivery(c){
	  setDriverPhone(newDriverPhone);
	  setWebsite(newWebsite);
	}
	
	int getDriverPhone(){return driverPhone;}
	void setDriverPhone(int newDriverPhone){driverPhone = newDriverPhone;}
	string getWebsite(){return website;}
	void setWebsite(string newWebsite){website = newWebsite;}
	
	void print(){
	  FoodCompany::print();
	  TechCompany::selectPrint();
	  delivery.print();
	  cout << "\t > Driver's Phone Number: " << getDriverPhone() << endl;
	  cout << "\t > Website: " << getWebsite() << endl;
	}	
};
#endif