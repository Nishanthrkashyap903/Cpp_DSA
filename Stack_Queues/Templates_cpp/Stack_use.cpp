#include <iostream>
using namespace std;
#include "Stack_template.cpp"

int main() {
	Dynamic_Stack<char> s;  
	s.push('a');
	s.push(101);
	s.push(103);
	s.push(104);
	s.push(105);



	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}
