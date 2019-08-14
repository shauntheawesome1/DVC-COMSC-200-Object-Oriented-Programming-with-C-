/*---------------------
          Date
-----------------------
- day : int
- month : int
- year : int
-----------------------
+ Date(m: int, d: int, y: int)
+ showMilDate() : void
+ showRegDate() : void
-----------------------*/
#ifndef DATE_H_INCLUDED__
#define DATE_H_INCLUDED__
#include <iostream>
using namespace std;

class Date {

	private:
    	int day, month, year;

	public:
    	Date(int, int, int);
		void regularDatePrint();
    	void militaryDatePrint();
};
#endif