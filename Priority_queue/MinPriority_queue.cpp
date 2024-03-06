#include<iostream>
using namespace std;
#include "MinPriority_queue.h"
int main()
{
    MinPriorityQueue pq;
    pq.insert(1);
    pq.insert(2);
    pq.insert(3);
    pq.insert(4);
    pq.insert(5);
    pq.insert(6);

    cout<<pq.getMin()<<endl;
    cout<<pq.getsize()<<endl;
    
    //heap sort
    while(!pq.isEmpty())
    {
        cout<<pq.removeMin()<<" ";
    }

}