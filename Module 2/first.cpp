#include <iostream>
#include <string>

using namespace std;

struct Trial{
	Trial* shaun;
	int age;
	string response;
};

int main(){
	Trial trial;
    cout << "Welcome Back! Please let this work...." << endl;
	getline(cin,trial.response);
	cout << "Well, thank you for the response. You said this:  " << endl;
	cout << trial.response;
}