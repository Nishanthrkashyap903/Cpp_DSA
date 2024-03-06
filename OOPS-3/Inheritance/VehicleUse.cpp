#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"

int main() {
	Vehicle v;

	v.color = "Blue"; 
	// v.maxSpeed = 100;   //it is a private member
	// v.numTyres = 4;     //protected can be accessed by only child classes


	Car c;     
	c.color = "Black"; 
	// c.numTyres = 4;   // can be accessed by only child classes
	c.numGears = 5;


}

