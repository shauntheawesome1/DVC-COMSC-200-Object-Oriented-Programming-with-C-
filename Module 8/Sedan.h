/*
----------------------------
Sedan :: Vehicle
----------------------------
- doors : int
- hatchback : bool
----------------------------
+ Sedan()
+ Sedan(int, int, int, bool)
+ print() : void
----------------------------*/
#ifndef SEDAN_H
#define SEDAN_H
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Sedan : public Vehicle{
  private:
	static int doors;
	static bool hatchback;
		
  public:
	Sedan();
	Sedan(int, int, int, int, bool);
	void print();
	void setDoors(int);
	void setHatchBack();
}


#endif	