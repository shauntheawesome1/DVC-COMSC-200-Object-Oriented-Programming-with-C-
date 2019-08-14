#include "Vehicle.h"
#include "Vehicle.cpp"
#include "Sedan.h"
#include Sedan.cpp


using namespace std;

int Main(){
	Vehicle tuktuk(1995, 40000);
	Sedan Nissan(2000, 5000000, 4, true);
	
	tuktuk.print();
	Nissan.print();
	
}