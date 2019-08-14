/*
--------------------------------
		Bravo::Alpha
--------------------------------
- status : boolean
- total : float
--------------------------------
+ Bravo()
+ Bravo(int, string, boolean, float)
+ getStatus() : boolean
+ setStatus(boolean) : void
+ getTotal() : float
+ setTotal(float) : void
--------------------------------*/
#ifndef BRAVO_H
#define BRAVO_H
#include <iostream>
#include <string>
using namespace std;

class Bravo : public Alpha{
  private:
    bool status;
	float total;
	
  public:
    Bravo() : Alpha(){
	  setStatus(true);
	  setTotal(0.0);
	};
	
	Bravo(int newNumber, string newSentence, bool newStatus, float newTotal) : Alpha(newNumber, newSentence){
	  setStatus(newStatus);
	  setTotal(newTotal);	
	};
	bool getStatus(){return status;}
	void setStatus(bool newStatus){status = newStatus;}
	float getTotal(){return total;}
	void setTotal(float newTotal){total = newTotal;}
}
#endif