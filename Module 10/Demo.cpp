#include "Venue.h"
#include "Theater.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  Venue v;
  Venue venue("Restaurant", 2012, 200, 50.32);
  
  cout << venue.revenue() << endl;
  
  Theater t;
  Theater theater("Movie Theater", 2012, 20, 50.00, "Regal", "0000 Hacienda Drive", "Dublin, CA, 94582", 50);
  
  cout << "$" << theater.revenue() << endl;
	
	
	
}