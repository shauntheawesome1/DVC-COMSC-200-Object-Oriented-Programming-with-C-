/*
---------------------------------------------------
		      TechCompany::Company
---------------------------------------------------	
- float : yearlyWage
- bool : internships
- int : numComputers
---------------------------------------------------	
+ TechCompany()
+ TechCompany(string, float, float, float, bool, int)
+ getYearlyWage() : string
+ setYearlyWage(y: string) : void
+ getInternships() : bool
+ setInternships(i: bool) : void
+ getNumComputers() : int
+ setNumComputers(c: int) : void
+ print() : void
+ selectPrint() : void
---------------------------------------------------*/
#ifndef TECHCOMPANY_H
#define TECHCOMPANY_H
#include "Company.h"
#include <iostream>
#include <string>
using namespace std;

class TechCompany : public Company{
  private:
	float yearlyWage;
	bool internships;
	int numComputers;
	
  public:
	TechCompany() : Company(){
	  setYearlyWage(0.00);
	  setInternships(false);
	  setNumComputers(0);
	}
	TechCompany(string newName, float newRevenue, float newExpenses, float newYearlyWage, bool newInternships, int newNumComputers) : Company(newName, newRevenue, newExpenses){
	  setYearlyWage(newYearlyWage);
	  setInternships(newInternships);
	  setNumComputers(newNumComputers);		
	}
	
	float getYearlyWage(){return yearlyWage;}
	void setYearlyWage(float newYearlyWage){yearlyWage = newYearlyWage;}
	bool getInternships(){return internships;}
	void setInternships(bool newInternships){internships = newInternships;}
	int getNumComputers(){return numComputers;}
	void setNumComputers(int newNumComputers){numComputers = newNumComputers;}
	
	void print(){
	  Company::print();
	  cout << "\t > Yearly Wage: $" << getYearlyWage() << endl;
	  cout << "\t > Internships Offered: ";
	  if(getInternships() == true){
		cout << "Yes" << endl;
	  }else{
		 cout << "No" << endl;
	  }
	  cout << "\t > Number of Computers: " << getNumComputers() << endl;
	}
	void selectPrint(){
	  cout << "\t > Yearly Wage: $" << getYearlyWage() << endl;
	  cout << "\t > Internships Offered: ";
	  if(getInternships() == true){
		cout << "Yes" << endl;
	  }else{
		 cout << "No" << endl;
	  }
	  cout << "\t > Number of Computers: " << getNumComputers() << endl;		
	}
};
#endif