#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue< int ,vector<int> ,greater<int> > pq;
    pq.push(20);
    pq.push(10);
    pq.push(5);
    pq.push(50);
    pq.push(15);
    cout<<pq.top()<<endl;
}
