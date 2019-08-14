#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

struct Color{
  int red, green, blue;
};

int main(){
  // Programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  
  srand(time(0)); // Reset
  vector<Color> setColors;
  int numColors = (rand() % 46) + 5; // First range 0-46, second 5-50
  

  for(int i = 0; i < numColors; i++){
    int valRed = rand() % 256; // 0-255 for red
    int valGreen = rand() % 256; // 0-255 for green
    int valBlue = rand() % 256; // 0-255 for blue

    Color tempColor = {valRed, valGreen, valBlue}; // initializer list with said values
    setColors.push_back(tempColor);
  }
  
  cout << "" << endl;
  cout << "Color#\tR value\tG value\tB value\n------- -------- -------- --------\n"; // Formatting taken from Textbook PDF

  for (int x = 0; x < numColors; x++){
    int a = (setColors.at(x).red); // needs the @ keyword, in vector class
	int b = (setColors.at(x).green);
	int c = (setColors.at(x).blue);
    cout << x + 1 << "\t" << a << "\t" << b << "\t" << c << endl;
  }
}