#include<iostream>
using namespace std;
#include "student1.cpp"
#include<cstring>

// int main()
// {
//     /*
//     char name[]="abcd";
//     student1 s1(20,name);
//     s1.display();
//     name[3]='e';
//     student1 s2(24,name);
//     s2.display();
//     s1.display();  
//     */

//    //create our own copy constructor
//     char name[]="abcd";
//     student1 s1(20,name);
//     s1.display();
//     student1 s2(s1);  //our own copy constructor
//     s2.name[0] ='x';
//     s1.display();  //not reflected
//     s2.display();
// }

class Student {
    public :

    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a) {
    }
};


int main() {
    Student s1(100, 23);
    int age=20;
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}