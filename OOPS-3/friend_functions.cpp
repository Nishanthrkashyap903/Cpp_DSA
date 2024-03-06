#include <iostream>
using namespace std;

class Bus {
	public :
		void print();

        void print1();

        void print2();
};

void test();

class Truck {
	private :
		int x;

	protected :
		int y;

	public :
		int z;

	friend class Bus;
    
    /*
	friend void Bus :: print();

	friend void test();
    */
};

void Bus :: print() {
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl;
}
void Bus :: print1() {
	Truck t;
	t.x = 11;
	t.y = 21;
	cout << t.x << " " << t.y << endl;
}
void Bus:: print2()
{
    Truck t;
	t.x = 12;
	t.y = 22;
	cout << t.x << " " << t.y << endl;   
}
/*
void test() {
	// Access truck private
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl;

}
*/
int main() {
	Bus b;
	b.print();
    b.print1();
    b.print2();
	// test();

}
