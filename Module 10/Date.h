/*

--------------------------------
			Date
--------------------------------
- int : month
- int : day
- int : year
--------------------------------
+ Date()
+ Date(int, int, int)
+ getMonth() : int
+ setMonth(m: int) : void
+ getDay() : int
+ setDay(d: int) : void
+ getYear() : void
+ setYear(y: int) : void
+ print() : void
--------------------------------*/
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class Date{
  private:
	int month, day, year;
  
  public:
	Date(){
	  setMonth(1);
	  setDay(1);
	  setYear(1);
	}
	
	Date(int newMonth, int newDay, int newYear){
	  setMonth(newMonth);
	  setDay(newDay);
	  setYear(newYear);
	}
	
	int getMonth(){return month;}
	void setMonth(int newMonth){month = newMonth;}
	int getDay(){return day;}
	void setDay(int newDay){day = newDay;}
	int getYear(){return year;}
	void setYear(int newYear){year = newYear;}
	
	void print(){
	  cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;		
	}
	
};
#endif


