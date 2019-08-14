#include "car.h"
#include "car.cpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string tempMake;
	int tempYear;
	
	cout << "\n\n";
	cout << "*******************CAR DEMO! SHOW US YOUR DREAM CAR: LET US DO THE WORK*******************" << endl;
	cout << "\n\n" << endl;
	cout << "Enter your car's make: ";
	cin >> tempMake;
	cout << "" << endl;
	cout << "Enter your car's year: ";
	cin >> tempYear;
	cout << "" << endl;
	
	Car car(tempMake, tempYear);
	int choice;
	
	while(true){
		cout << "Select your option! Type in" << endl;
		cout << "1: Accelerate car (Speed boost by 5)" << endl;
		cout << "2| Brake car (Speed reduction by 5)" << endl;
		cout << "3| Quit. Please don't press this already! Let's have more fun with your " << tempMake << "!" << endl;
		
		cin >> choice;
		cout << "Choice Selected: " << choice << endl;
		
		if(choice == 1){
			car.accelerate();
			cout << "\n\n\n";
		}
		if(choice == 2){
			car.brake();
			cout << "\n\n\n";
		}
		if(choice == 3){
			cout << "Noooooo! I really wanted to learn more about your " << tempMake << ". Oh well. Thank you, and see you next time! " << endl;
			cout << "\n\n\n";
			break;
		}

		
	}
	
	
	
	
	
}