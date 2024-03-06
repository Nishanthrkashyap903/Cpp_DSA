#include<iostream>
using namespace std;
#include "FractionClass.cpp"
int main()
{
   fraction f1(10,2);
   fraction f2(15,4);
   //returning object
   fraction f3=f1.add(f2);
   //operator overloading
   fraction f4=f1+f2;
   fraction f5=f1*f2;
   if(f1==f2)
   {
    cout<<"Equal"<<endl;
   }
   else{
    cout<<"Not equal"<<endl;
   }
   f1.print();
   f2.print();
   f3.print();
   f4.print();
   f5.print();
   fraction f6=++(++f1);
   f1.print();
   f6.print();
   ++(++f1);
   f1.print();
   //post increment
   fraction f7=(f1++);
   f7.print();
   f1.print();
   //+= operator
   fraction f8(10,3);
   fraction f9(5,2);
   (f8+=f9)+=f9;
   f8.print();
   f9.print();
}
