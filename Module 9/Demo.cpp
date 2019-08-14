#include "PublishedWork.h"
#include "ElectronicDevice.h"
#include "ReaderApp.h"
#include <iostream>
#include <string>
using namespace std;

void printObject(ReaderApp R){
  string choice;
  cout << "Welcome to your " << R.getType() << ". It is currently running on " << R.getOs() << ", with about " << R.getMemory() << " GB's of memory" <<endl;
  cout << "Your published work was written by " << R.getAuthor() << ", in the year " << R.getYearPub() << endl;
  cout << "\n" << endl;
  cout << "IMPORTANT: YOU WILL NEED A READER APP TO READ THIS FILE. IS USING THE INSTALLED READER APP OKAY? Y/N" << endl;
  getline(cin, choice);
  if(choice == "Y" || choice == "y"){
	cout << "Reading Application: " << R.getName() << ". Cost is $" << R.getCost() << endl;
  }
  cout << "Goodbye! \n\n" << endl;
}

int main(){
  // Programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  cout << "\n\n" << endl;
  
/*PublishedWork pb;
  PublishedWork P("Rick Riordan", 2008);
	
  ElectronicDevice ed;
  ElectronicDevice E("Phone", "Android", 100);*/
	
  ReaderApp ra;
  ReaderApp R("Mary Osborne", 2010, "Computer", "Linux", 300, "RedHat Doc Viewer", 50.52);
  ReaderApp R2("JK Rowling", 2012, "Kindle", "IOS", 50, "Microsoft Word Doc", 15.43);
  ReaderApp R3("Jeff Kinney", 2014, "Mackintosh", "Mac OS X", 350, "Pages", 500.45);
	
  printObject(R);
  printObject(R2);
  printObject(R3);
}