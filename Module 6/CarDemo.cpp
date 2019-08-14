#include "car.h"
#include "car.cpp"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(){
  // Programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  vector <Car> carCollection;
  
  string buf;
  int choice = 0;
  
  while(true){
	cout << "\n\n\n\n\n" << endl;
    cout << "Select your option! Type in" << endl;
    cout << " > 1 | Print complete car collection" << endl;
	cout << " > 2 | Add a car to the collection" << endl;
	cout << " > 3 | Remove a car from the collection" << endl;
	cout << " > 4 | Accelerate a car " << endl;
	cout << " > 5 | Brake a car" << endl;
	cout << " > 6 | Quit" << endl;
		
	cin >> buf;
	stringstream ss(buf);
	ss >> choice;
	
	if(choice == 1){
	  if(carCollection.size() == 0){
		cout << "Error: There are no cars in the collection." << endl;
	  } else{
		  cout << "Printing list of cars:" << endl;
		  for(int i = 0; i < carCollection.size(); i++){
			cout << "\n\n";
		    cout << " > " << carCollection[i].getMake() << " | " << carCollection[i].getYear() << " | " << carCollection[i].getSpeed() << " mph " << endl;
		  }
	  }
	}
	
	if(choice == 2){
	  string newMake;
	  int newYear;
	  cout << " > Enter make: " << endl;
	  cin >> newMake;
	  cout << " > Enter Year: " << endl;
	  cin >> newYear;
	  Car c(newMake, newYear);
	  carCollection.push_back(c);
	  cout << "\n\n";
	  cout << " > Done. Car Added" << endl;
    }
	
	if(choice == 3){
	  int subchoice = 0;
	  cout << "Which car shall be deleted?" << endl;
	  //auto it = carCollection.begin();
	  int i;
	  for(i = 0; i < carCollection.size(); i++){
		cout << i << " > " << carCollection[i].getMake() << " | " << carCollection[i].getYear() << " | " << carCollection[i].getSpeed() << " mph " << endl;
	  }
	  cin >> subchoice;
	  carCollection.erase(carCollection.begin()+subchoice);
	  cout << "Car Deleted. Job done" << endl;
	}
	
	if(choice == 4){
	  if(carCollection.size() == 0){
		  cout << "Error: No Cars to accelerate. " << endl;
	  }else{
		  int subchoice;
		  cout << "Which car to accelerate? " << endl;
          for(int i = 0; i < carCollection.size(); i++){
		    cout << i + 1 << " > " << carCollection[i].getMake() << " | " << carCollection[i].getYear() << " | " << carCollection[i].getSpeed() << " mph " << endl;
		  }
		  cin >> subchoice;
		  carCollection[subchoice - 1].accelerate();
		  cout << "\n\n";
		  cout << "Done. Car Accelerated. New Speed " << carCollection[subchoice - 1].getSpeed() << " mph" << endl;
	  }
	
	if(choice == 5){
	  if(carCollection.size() == 0){
		  cout << "Error: No Cars to brake. " << endl;
	  }else{
		  int subchoice;
		  cout << "Which car to accelerate? " << endl;
          for(int i = 0; i < carCollection.size(); i++){
		    cout << i + 1 << " > " << carCollection[i].getMake() << " | " << carCollection[i].getYear() << " | " << carCollection[i].getSpeed() << " mph " << endl;
		  }
		  cin >> subchoice;
		  carCollection[subchoice - 1].brake();
		  cout << "\n\n";
		  cout << "Done. Car Braked. New Speed " << carCollection[subchoice - 1].getSpeed() << " mph" << endl;
		
		}
	}
	
	if(choice == 6){
	  cout << " Program ending. Bye" << endl;
	  break;
	}
  }
  }
}