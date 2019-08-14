#include "Date.h"
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  Date date(2,3,2003);
  Person father(123456789,date);
  father.print();
}