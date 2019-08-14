#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int sumVector(vector <int> arg){
  int x = 0;
  int totalSum = 0;
  for(int i = 0; i < arg.capacity(); i++){
	x = arg.at(i);
	if(x % 2 != 0){
	  totalSum += x;
    }	  
  }
}

int main(){
  vector <int> arg;
  srand(time(0));

  for(int i = 0;i < 25;i++){
    int ranNum = rand() % 100;
    arg.push_back(ranNum);
  }
  cout << endl;
  cout << endl;
  cout << sumVector(arg) << endl;
}