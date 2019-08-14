/*
--------------------------------
			Venue
--------------------------------
- string : venueType
- int : yearOpen
- int : capacity
- float : price
--------------------------------
+ Venue()
+ Venue(string, int, int, float)
+ getVenueType() : string
+ setVenueType(v: string) : void
+ getYearOpen() : int
+ setYearOpen(y: int) : void
+ getCapacity() : int
+ setCapacity(c: int) : void
+ getPrice() : float
+ setPrice(p: float) : void
+ revenue() : float
--------------------------------*/
#ifndef VENUE_H
#define VENUE_H
#include <iostream>
#include <string>
using namespace std;

class Venue{
  private:
	string venueType;
	int yearOpen, capacity;
	float price;

  public:
	Venue(){
	  setVenueType("");
	  setYearOpen(2000);
	  setCapacity(0);
	  setPrice(0.00);
	}
	Venue(string newVenueType, int newYearOpen, int newCapacity, float newPrice){
	  setVenueType(newVenueType);
	  setYearOpen(newYearOpen);
	  setCapacity(newCapacity);
	  setPrice(newPrice);
	}
	
    string getVenueType(){return venueType;}
	void setVenueType(string newVenueType){venueType = newVenueType;}
	int getYearOpen(){return yearOpen;}
	void setYearOpen(int newYearOpen){yearOpen = newYearOpen;}
	int getCapacity(){return capacity;}
	void setCapacity(int newCapacity){capacity = newCapacity;}
	float getPrice(){return price;}
	void setPrice(float newPrice){price = newPrice;}
	
	float revenue(){
	  return getCapacity() * getPrice();
	}
	
};
#endif
