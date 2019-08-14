/*
--------------------------------
			Alpha
--------------------------------
- number : int
- sentence : string
--------------------------------
+ Alpha()
+ Alpha(int, string)
+ getNumber() : int
+ setNumber(int) : void
+ getSentence() : int
+ setSentence(string) : void
--------------------------------*/
#ifndef ALPHA_H
#define ALPHA_H
#include <iostream>
#include <string>
using namespace std;

class Alpha{
  private:
    int number;
	string sentence;
  
  public:
	//Constructors
    Alpha(){ //Default Constructor
	  setNumber(0)
	  setSentence("")
	};
	
	Alpha(int newNumber, string newSentence){ //Argument Constructor
	  setNumber(newNumber);
	  setSentence(newSentence)
	};
	
	int getNumber(){return number;} //accessor function
	void setNumber(int newNumber){number = newNumber;} //mutator function
	int getSentence(){return sentence;} //accessor function
	void setNumber(string newSentence); //mutator function
};
#endif
