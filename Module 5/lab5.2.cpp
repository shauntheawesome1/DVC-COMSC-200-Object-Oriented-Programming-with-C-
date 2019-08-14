#include <iostream>
#include "Date.h"
using namespace std;

int main() {
   // Programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  cout << "\n" << endl;
   Date today(12, 25, 2014);
   today.showMilDate();
   today.showRegDate();

   return 0;
}