/*
-----------------------------------------------------------
	   ReaderApp::PublishedWork, ElectronicDevice
-----------------------------------------------------------
- string : name
- float : cost
-----------------------------------------------------------
+ ReaderApp()
+ ReaderApp(string, int, string, string, int, string, float)
+ getName() : string
+ setName(string) : void
+ getCost() : int
+ setCost(int) : void
-----------------------------------------------------------*/
#ifndef READERAPP_H
#define READERAPP_H
#include "PublishedWork.h"
#include "ElectronicDevice.h"
#include <iostream>
#include <string>
using namespace std;

class ReaderApp : public PublishedWork, public ElectronicDevice{
  private:
	string name;
	float cost;

  public:
	ReaderApp() : PublishedWork(), ElectronicDevice(){
	  setName("");
	  setCost(0.0);
	}
	
	ReaderApp(string newAuthor, int newYearPub, string newType, string newOs, int newMemory, string newName, float newCost) : PublishedWork(newAuthor, newYearPub), ElectronicDevice(newType, newOs, newMemory){
	  setName(newName);
	  setCost(newCost);
	}
	
	string getName(){return name;}
	void setName(string newName){name = newName;}
	float getCost(){return cost;}
	void setCost(float newCost){cost = newCost;}
};
#endif