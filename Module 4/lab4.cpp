/*----------------------------
Book
----------------------------
- author: string
- yearPublished: int
- title: string
----------------------------
+ getAuthor(): string
+ getYear(): int
+ getTitle(): string
+ setAuthor(a: string): void
+ setYear(y: int): void
+ setTitle(t: string): void
----------------------------*/
#include <iostream>
#include <string>
using namespace std;

class Book
{
  private:
    string author;
    int yearPublished;
    string title;
  public:
    string getAuthor() const;
    int getYear() const;
    string getTitle() const;
    void setAuthor(string);
    void setYear(int);
	void setTitle(string);
};

string Book::getAuthor() const
{
  return author;
}

int Book::getYear() const
{
  return yearPublished;
}

string Book::getTitle() const
{
  return title;
}

void Book::setAuthor(string newAuthor)
{
  author = newAuthor;
}

void Book::setYear(int newYearPublished)
{
  yearPublished = newYearPublished;
}

void Book::setTitle(string newTitle)
{
  title = newTitle;
}

int main()
{
  // Programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  cout << "\n" << endl;
  
  Book percyjackson, harrypotter, hungergames;
  
  percyjackson.setAuthor("Rick Riordan");
  percyjackson.setTitle("The Lightning Thief");
  percyjackson.setYear(2005);
  
  harrypotter.setAuthor("J.K Rowling");
  harrypotter.setTitle("Sorcerer's Stone");
  harrypotter.setYear(2001);
  
  hungergames.setAuthor("Suzanne Collins");
  hungergames.setTitle("Mockingjay");
  hungergames.setYear(2010);
  
  cout << "Here is Percy Jackson's data:\n";
  cout << "Author " << percyjackson.getAuthor() << endl;
  cout << "Title: " << percyjackson.getTitle() << endl;
  cout << "Year: " << percyjackson.getYear() << endl;
  cout << "\n" << endl;
  
  cout << "Here is Harry Potter's data:\n";
  cout << "Author " << harrypotter.getAuthor() << endl;
  cout << "Title: " << harrypotter.getTitle() << endl;
  cout << "Year: " << harrypotter.getYear() << endl;
  cout << "\n" << endl; 
  
  cout << "Here is The Hunger Games' data:\n";
  cout << "Author " << hungergames.getAuthor() << endl;
  cout << "Title: " << hungergames.getTitle() << endl;
  cout << "Year: " << hungergames.getYear() << endl;
  cout << "\n" << endl;
  
  cout << "Goodbye!\n\n" << endl;
}
  
  	
  
