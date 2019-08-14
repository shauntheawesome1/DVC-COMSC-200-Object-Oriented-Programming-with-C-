#include "Company.h"
#include "FoodCompany.h"
#include "TechCompany.h"
#include "KitchenDelivery.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	
  const int MAX_SIZE = 4;
  string choice;
	
  Company c;
  Company company("Star-Hacks LLC", 500.50, 200.32);
  
  FoodCompany fc;
  FoodCompany foodcompany("Panda Express", 600.50, 200.40, 16.50, true, "Foster Farms");
  
  TechCompany tc;
  TechCompany techcompany("NETSCOUT SYSTEMS INC", 100000000.50, 300.30, 50000, true, 500);
  
  Car ca;
  Car car("JK02AP7682", true, 17);
  
  KitchenDelivery kd;
  KitchenDelivery kitchendelivery("Sweet Tomatoes", 8000.32, 245.39, 12.50, true, "Grandma's Farms", 20000, false, 10, car, 9258998458, "www.sweettomatoes.com");  
  
  /*company.print();
  foodcompany.print();
  techcompany.print();
  kitchendelivery.print();*/
  
  
  Company companies[MAX_SIZE] = {
	Company("Star-Hacks LLC", 500.50, 200.32),
	FoodCompany("Panda Express", 600.50, 200.40, 16.50, true, "Foster Farms"),
	TechCompany("NETSCOUT SYSTEMS INC", 100000000.50, 300.30, 50000, true, 500),
	// Can't include KitchenDelivery; Polymorphism won't reach mem-vars
  };
  
  cout << "Welcome to the company program! Would you like to start? Y/N" << endl;
  cin >> choice;
  while(choice == "Y" || choice == "y"){
	int subchoice = 0;
	
	cout << "Which kind of Company would you like to view? " << endl;
	cout << "\t > 1. Regular Company" << endl;
	cout << "\t > 2. Food Company" << endl;
	cout << "\t > 3. Technology Company" << endl;
	cout << "\t > 4. Food Maker/Delivery Company" << endl;
	cout << "\t > 5. Quit " << endl;
	cin >> subchoice;
	
	if(subchoice == 1){
	  cout << "\n\n" << endl;
	  cout << "This is the base class. All Food Companies, Tech Companies, and Kitchen Delivery Companies, are at their base, Companies.";
	  cout << " However, the Company is the most general class, meaning it has the least attributes." << endl;
	  cout << "Here they are!" << endl;
	  companies[subchoice-1].print();
	  cout << "\n\n" << endl;
	}	
	if(subchoice == 2){
	  cout << "\n\n" << endl;
	  cout << "Food Company is a derived class of Company. All Food Companies are Companies, but all companies are not necessarily food related.";
	  cout << " So, Food Companies will have all attributes of Companies, in addition to some exclusively for itself. It only shares these variables with its own derived class." << endl;
	  cout << "Here they Are!" << endl;
	  companies[subchoice-1].print();
	  foodcompany.selectPrint();
	  cout << "\n\n" << endl;
	}
	if(subchoice == 3){
	  cout << "\n\n" << endl;
	  cout << "Tech Company is a derived class of Company. All Tech Companies are Companies, but all companies are not necessarily tech related.";
	  cout << " So, Tech Companies will have all attributes of Companies, in addition to some exclusively for itself. It only shares these variables with its own derived class." << endl;
	  cout << "Here they Are!" << endl;
	  companies[subchoice-1].print();
	  techcompany.selectPrint();
	  cout << "\n\n" << endl;
	}
	if(subchoice == 4){
	  cout << "\n\n" << endl;
	  cout << "Kitchen Delivery Companies are the most derived class. It extends both Tech and Food Companies. All Kitchen Delivery Companies are Tech and Food, but not vice versa.";
	  cout << " Kitchen Delivery Companies are not directly in the Company Array, as they do not inherit directly. Since polymorphism only works one way, we cant have a Kitchen Delivery pointer to a company class." << endl;
	  cout << "Here they Are!" << endl;
	  kitchendelivery.print();
	  cout << "\n\n" << endl;
	}
	else if(subchoice == 5){break;}
	
	
  }
  cout << "Goodbye! \n\n\n" << endl;
  
	
  
}