/*
--------------------------------
	  Charlie::Alpha,Bravo
--------------------------------
- situation : string
- balance : float
--------------------------------
+ Charlie()
+ Charlie(int, string, boolean, float, string, balance)
+ getSituation() : string
+ setSituation(string) : void
+ getBalance() : float
+ setBalance(float) : void
--------------------------------*/
#ifndef CHARLIE_H
#define CHARLIE_H
#include <string>
#include <iostream>
using namespace std;

class Charlie : public Alpha, public Bravo{
  private:
    string situation;
	float balance;
  public:
    Charlie() : Alpha(), Bravo(){
	  setSituation("");
	  setBalance(0);
	}
	Charlie(int newNumber, string newSentence, bool newStatus, float newTotal, string newSituation, float newBalance) : Alpha(newNumber, newSentence), Bravo(newStatus, newTotal){
	  setSituation(newSituation);
	  setBalance(newBalance);
	};
	string getSituation(){return situation;}
	void setSituation(string newSituation){situation = newSituation;}
	float getBalance(){return balance;}	
	void setBalance(float newBalance){balance = newBalance;}
};
#endif