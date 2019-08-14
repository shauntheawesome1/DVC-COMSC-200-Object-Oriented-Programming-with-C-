/*
------------------------------
		  Company
------------------------------	
- string : name
- float : revenue
- float : expenses
- float : profit	
------------------------------	
+ Company()
+ Company(string, float, float)
+ getName() : string
+ setName(n: string) : void
+ getRevenue() : float
+ setRevenue(r: float) : void
+ getExpenses() : float
+ setExpenses(e: float) : void
+ getProfit() : float
+ print() : void 
------------------------------*/
#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include <string>
using namespace	std;

class Company{
  private:
	string name;
	float revenue, expenses, profit;

  public:
	Company(){
	  setName("");
	  setRevenue(0.00);
	  setExpenses(0.00);
	}
	Company(string newName, float newRevenue, float newExpenses){
	  setName(newName);
	  setRevenue(newRevenue);
	  setExpenses(newExpenses);
	}
	
	string getName(){return name;}
	void setName(string newName){name = newName;}
	float getRevenue(){return revenue;}
	void setRevenue(float newRevenue){revenue = newRevenue;}
	float getExpenses(){return expenses;}
	void setExpenses(float newExpenses){expenses = newExpenses;}
	float getProfit(){return profit = revenue - expenses;}
	
	void print(){
	  cout << "\n\n" << endl;
	  cout << "Information for Company " << getName() << ":" <<endl;
	  cout << "\t > Revenue: $" << getRevenue() << endl;
	  cout << "\t > Expenses: $" << getExpenses() << endl;
	  cout << "\t > Profit: $" << getProfit() << endl;
	}
		
};
#endif