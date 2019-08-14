#include <fstream> 
#include <iostream>
#include <string>

using namespace std;

struct Key{
 string name;
 int age;
 double gpa;	
};

int main( )
{
 Key key = {"Shaun", 16, 4.4};
 Key key2 = {"Dillon", 22, 4.6};
 //key.name= "Shaun"
 //key.age = 16;
 //key.gpa = 4.4;
 
 ofstream fout;
 fout.open("data.txt");
 if (fout.good())
 {
  fout << "Name\tAge\tGPA\n"; // column headings
  fout << key.name << '\t' << key.age << '\t' << key.gpa << '\n';
  fout << key2.name << '\t' << key2.age << '\t' << key2.gpa << '\n';
 }
 
 else
 {
  cout << "no file" << endl;
 }
 
 fout.close(); // done with the file
} 