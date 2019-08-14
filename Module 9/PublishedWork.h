/*
--------------------------------
		PublishedWork
--------------------------------
- string : author
- int : yearPub
--------------------------------
+ PublishedWork()
+ PublishedWork(string, int)
+ getAuthor() : string
+ setAuthor(string) : void
+ getYearPub() : int
+ setYearPub(int) : void
--------------------------------*/
#ifndef PUBLISHED_H
#define PUBLISHED_H
#include <iostream>
#include <string>
using namespace std;

class PublishedWork{
  private:
    string author;
	int yearPub;
	
  public:
	PublishedWork(){ 
	  setAuthor("");
	  setYearPub(0);
	}
	
	PublishedWork(string newAuthor, int newYearPub){
	  setAuthor(newAuthor);
	  setYearPub(newYearPub);
	}
	
	string getAuthor(){return author;}
	void setAuthor(string newAuthor){author = newAuthor;}
	int getYearPub(){return yearPub;}
	void setYearPub(int newYearPub){yearPub = newYearPub;}

};
#endif