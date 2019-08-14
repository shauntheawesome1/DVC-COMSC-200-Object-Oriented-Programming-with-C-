#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::showMilDate() {
	cout << setfill('0') << setw(2) << day;
	switch(month) {
		case 1: cout << "JANUARY"; break;
		case 2: cout << "FEBRUARY"; break;
		case 3: cout << "MARCH"; break;
		case 4: cout << "APRIL"; break;
		case 5: cout << "MAY"; break;
		case 6: cout << "JUNE"; break;
		case 7: cout << "JULY"; break;
		case 8: cout << "AUGUST"; break;
		case 9: cout << "SEPTEMBER"; break;
		case 10: cout << "OCTOBER"; break;
		case 11: cout << "NOVEMBER"; break;
		case 12: cout << "DECEMBER"; break;
	}
	cout << year << endl;
}

void Date::showRegDate() {
	switch(month) {
		case 1: cout << "January "; break;
		case 2: cout << "February "; break;
		case 3: cout << "March "; break;
		case 4: cout << "April "; break;
		case 5: cout << "May "; break;
		case 6: cout << "JunE "; break;
		case 7: cout << "July "; break;
		case 8: cout << "August "; break;
		case 9: cout << "September "; break;
		case 10: cout << "October "; break;
		case 11: cout << "November "; break;
		case 12: cout << "December "; break;
	}
	cout << day << ", " << year << endl;
}