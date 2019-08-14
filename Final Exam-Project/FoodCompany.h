/*
---------------------------------------------------
		      FoodCompany::Company
---------------------------------------------------	
- float : hourlyWage
- bool : fdaApproval
- string : farm
---------------------------------------------------	
+ FoodCompany()
+ FoodCompany(string, float, float, float, bool, string)
+ getHourlyWage() : float
+ setHourlyWage(h: float) : void
+ getFdaApproval() : bool
+ setFdaApproval(f: bool) : void
+ getFarm() : string
+ setFarm(f: string) : void
+ print() : void
---------------------------------------------------*/
#ifndef FOODCOMPANY_H
#define FOODCOMPANY_H
#include "Company.h"
#include <iostream>
#include <string>
using namespace std;

class FoodCompany : public Company{
  private:
	int hourlyWage;
	bool fdaApproval;
	string farm;
	
  public:
	FoodCompany() : Company(){
	  setHourlyWage(0.00);
	  setFdaApproval(false);
	  setFarm("");
	}
	FoodCompany(string newName, float newRevenue, float newExpenses, float newHourlyWage, bool newFdaApproval, string newFarm) : Company(newName, newRevenue, newExpenses){
	  setHourlyWage(newHourlyWage);
	  setFdaApproval(newFdaApproval);
	  setFarm(newFarm);
	}	
	
	float getHourlyWage(){return hourlyWage;}
	void setHourlyWage(float newHourlyWage){hourlyWage = newHourlyWage;}
	bool getFdaApproval(){return fdaApproval;}
	void setFdaApproval(bool newFdaApproval){fdaApproval = newFdaApproval;}
	string getFarm(){return farm;}
	void setFarm(string newFarm){farm = newFarm;}
	
	void print(){
	  Company::print();
	  cout << "\t > Hourly Wage: $" << getHourlyWage() << endl;
	  cout << "\t > FDA Approval: ";
	  if(getFdaApproval() == true){
		cout << "Yes" << endl;
	  }else{
		 cout << "No" << endl;
	  }
	  cout << "\t > Farm Source: " << getFarm() << endl;
	}
	
	void selectPrint(){
	  cout << "\t > Hourly Wage: $" << getHourlyWage() << endl;
	  cout << "\t > FDA Approval: ";
	  if(getFdaApproval() == true){
		cout << "Yes" << endl;
	  }else{
		 cout << "No" << endl;
	  }
	  cout << "\t > Farm Source: " << getFarm() << endl;
		
		
	}
	
	
};
#endif