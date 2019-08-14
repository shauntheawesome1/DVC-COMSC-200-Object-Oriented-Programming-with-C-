#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int highVal(int a[],int size){
	int max = 0;
	for(int i = 0; i < size; i++){
		if(a[i] > max){
			max = a[i];
		}
    }
	return max;
}

int main(){
	int x[10];
	srand(time(0));
	for(int i=0; i<10; i++){
        x[i] = (rand()%100); 
	}
	cout << highVal(x,10) << endl;
}

