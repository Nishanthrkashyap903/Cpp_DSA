#include<iostream>
#include <queue>
using namespace std;
#include"BST_class.h"

int main()
{
    BST b;
    b.insert(10);
    b.insert(20);
    b.insert(5);
    b.insert(15);
    b.deleteData(10);
    
    b.print();
}