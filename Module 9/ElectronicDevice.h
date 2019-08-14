/*
--------------------------------
		ElectronicDevice
--------------------------------
- string : type
- string : os
- int : memory
--------------------------------
+ ElectronicDevice()
+ ElectronicDevice(string, string, int)
+ getType() : string
+ setType(string) : void
+ getOs() : string
+ setOs(string) : void
+ getMemory() : int
+ setMemory(int) : void
--------------------------------*/
#ifndef ELECTRONICDEVICE_H
#define ELECTRONICDEVICE_H
#include <iostream>
#include <string>
using namespace std;

class ElectronicDevice{
  private:
	string type, os;
	int memory;

  public:
	ElectronicDevice(){
	  setType("");
	  setOs("");
	  setMemory(0);
	}
	
	ElectronicDevice(string newType, string newOs, int newMemory){
	  setType(newType);
	  setOs(newOs);
	  setMemory(newMemory);		
	}
	
	string getType(){return type;}
	void setType(string newType){type = newType;}
	string getOs(){return os;}
	void setOs(string newOs){os = newOs;}
	int getMemory(){return memory;}
	void setMemory(int newMemory){memory = newMemory;}
};
#endif