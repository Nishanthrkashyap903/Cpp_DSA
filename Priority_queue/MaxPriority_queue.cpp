#include<iostream>
using namespace std;
#include "MaxPriority_queue.h"
int main()
{
    MaxPriorityQueue pq;
    pq.insert(3);
    pq.insert(4);
    pq.insert(63);
    pq.insert(21);
    pq.insert(9);

    cout<<pq.getMax()<<endl;
    cout<<pq.getSize()<<endl;

    cout<<pq.removeMax()<<endl;
    cout<<pq.getMax()<<endl;

    pq.insert(7);

    cout<<pq.getMax()<<endl;
    cout<<pq.removeMax()<<endl;

    cout<<pq.getMax()<<endl;

}