#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"

int main() {
	Vehicle v;

	Car c;

	v.print();

	c.print();


	Vehicle *v1 = new Vehicle;

	Vehicle *v2;
	// v2 = &v;

	v2 = &c;

	v1 -> print();

	/*Run Time polymorphism*/
	
	v2 -> print();


}
