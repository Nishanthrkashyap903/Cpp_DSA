#include<iostream>
using namespace std;
#include "constClass.cpp"
int main() {
    Student s1(101);
    s1.age = 20;
    Student const s2;
    s2.print();
    cout << s2.getRollNumber();
}
