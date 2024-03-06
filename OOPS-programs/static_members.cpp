// #include<iostream>
// using namespace std;
// #include "staticClass.cpp"
// int main()
// {
//     student s1;
//     student s2;
//     student s3,s4,s5;
//     cout<<"total students:"<<student::getTotalstudent()<<endl;
// }

#include<iostream>
using namespace std;
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}