#include <iostream>
#include <fstream>
#include <string>
using namespace std;

float correction(float var)
{
  cout.setf(ios::fixed);
  cout.precision(2);
  return var;
}

int main(){
  // programmer's identification
  cout << "Programmer: Shaun Munshi\n";
  cout << "Programmer's ID: 1706828\n";
  cout << "File: " << __FILE__ << endl;
  
  ifstream fin;
  fin.open("Shapes.input.txt");
  ofstream fout;
  fout.open("Shapes.output.txt");
  
  string inputObject;
  float firstDimension,secondDimension,thirdDimension;
  float area,perimeter,volume;
  
  while(true){
    if(fin.good()){
	fin >> firstDimension;
	fin >> secondDimension;
	fin >> thirdDimension;
	
	if(inputObject == "RECTANGLE"){
	  area = firstDimension * secondDimension;
	  perimeter = 2 * (firstDimension+secondDimension);
	  cout << inputObject << " " << "length=" << correction(firstDimension) << " " << "width=" << correction(secondDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	  fout << inputObject << " " << "length=" << correction(firstDimension) << " " << "width=" << correction(secondDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	}
	
	else if(inputObject == "SQUARE"){
	  area = firstDimension * firstDimension;
	  perimeter = 4 * firstDimension;
	  cout << inputObject << " " << "side=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	  fout << inputObject << " " << "side=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	}
	
	else if(inputObject == "CIRCLE"){
	  area = 3.14 * firstDimension * firstDimension;
	  perimeter = 2 *3.14 *firstDimension;
	  cout << inputObject << " " << "radius=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	  fout << inputObject << " " << "radius=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	}
	
	else if(inputObject == "CUBE"){
	  area = 6 * firstDimension * firstDimension;
	  volume = firstDimension * firstDimension *firstDimension;
	  cout << inputObject << " " << "side=" << correction(firstDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	  fout << inputObject << " " << "side=" << correction(firstDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	}
	
	else if(inputObject == "BOX"){
	  area = 2 * (firstDimension * secondDimension + secondDimension * thirdDimension + thirdDimension * firstDimension);
	  volume = firstDimension * secondDimension * thirdDimension;
	  cout << inputObject << " " << "length=" << correction(firstDimension) << " " << "width=" << correction(secondDimension) << " " << "height=" << correction(thirdDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	  fout << inputObject << " " << "length=" << correction(firstDimension) << " " << "width=" << correction(secondDimension) << " " << "height=" << correction(thirdDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	}
	
	else if(inputObject == "TRIANGLE"){
	  area = (sqrt(3)/4) * firstDimension * firstDimension;
	  perimeter = 3 * firstDimension;
	  cout << inputObject << " " << "side=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	  fout << inputObject << " " << "side=" << correction(firstDimension) << " " << "area=" << correction(area) << " " << "perimeter=" << correction(perimeter)<<endl;
	}
	
	else if(inputObject == "CYLINDER"){
	  area = 2 * 3.14 * firstDimension * secondDimension + 2 * 3.14 * firstDimension * firstDimension;
	  volume = 3.14 * firstDimension * firstDimension * secondDimension;
	  cout << inputObject << " " << "radius=" << correction (firstDimension) << " " << "height=" << correction(secondDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	  fout << inputObject << " " << "radius=" << correction(firstDimension) << " " << "height=" << correction(secondDimension) << " " << "surface area=" << correction(area) << " " << "volume=" << correction(volume)<<endl;
	}
	
	else{
	  cout << inputObject << " " << "INVALID OBJECT. NOT WRITING TO FILE." <<endl;
	}

}
	else{
	  break;
	}
 }


}

