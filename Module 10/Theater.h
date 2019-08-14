/*
---------------------------------------------
	          Theater::Venue
---------------------------------------------
- string : venueName
- string : venueAddr
- string : venue_csz
- float : avgConcessions
---------------------------------------------
+ Theater()
+ Theater(string, int, int, float, string, string, string, float)
+ getVenueName() : string
+ setVenueName(v: string) : void
+ getVenueAddr() : string
+ setVenueAddr(v: string) : void
+ getVenue_csz() : string
+ setVenue_csz(v: string) : void
+ getAvgConcessions() : float
+ setAvgConcessions(a: float) : void
+ revenue() : float
---------------------------------------------*/
#ifndef THEATER_H
#define THEATER_H
#include "Venue.h"
#include <iostream>
#include <string>
using namespace std;

class Theater : public Venue{
  private:
	string venueName, venueAddr, venue_csz;
	float avgConcessions;
	
  public:
	Theater() : Venue(){
	  setVenueName("");
	  setVenueAddr("");
	  setVenue_csz("");
	  setAvgConcessions(0.0);
	}
	Theater(string newVenueType, int newYearOpen, int newCapacity, float newPrice, string newVenueName, string newVenueAddr, string newVenue_csz, float newAvgConcessions) : Venue(newVenueType, newYearOpen, newCapacity, newPrice){
	  setVenueName(newVenueName);
	  setVenueAddr(newVenueAddr);
	  setVenue_csz(newVenue_csz);
	  setAvgConcessions(newAvgConcessions);
	}
	
	string getVenueName(){return venueName;}
	void setVenueName(string newVenueName){venueName = newVenueName;}
	string getVenueAddr(){return venueAddr;}
	void setVenueAddr(string newVenueAddr){venueAddr = newVenueAddr;}
	string getVenue_csz(){return venue_csz;}
	void setVenue_csz(string newVenue_csz){venue_csz = newVenue_csz;}
	float getAvgConcessions(){return avgConcessions;}
	void setAvgConcessions(float newAvgConcessions){avgConcessions = newAvgConcessions;}
	
	float revenue(){
		return(getCapacity() * getPrice()) + avgConcessions;
	}
	
};
#endif
