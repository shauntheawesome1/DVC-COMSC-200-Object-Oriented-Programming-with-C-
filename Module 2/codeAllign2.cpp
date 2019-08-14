#include <iostream>

using namespace std;

void adder(int, int); // int and int value for addition, return nothing (void)

int main(){
  int x = 5;
  int y = 5;
  adder(x,y);
}

void adder(int a, int b){ // see function prototype for details
  int c = a + b;
  cout << c << endl;
}