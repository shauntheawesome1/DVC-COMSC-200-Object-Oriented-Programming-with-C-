#include <iostream>

using namespace std;

int add(int, int); // int and int value for addition

int main(){
	int x = 5;
	int y = 5;
	int z = add(x,y);
	cout << z << endl;
}

int add(int a, int b){
	int c = a + b;
	return c;
}