#include<iostream>
using namespace std;
#include<queue>

int main(){
    priority_queue<int> pq;//by default it will be max prio queue
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(25);
    pq.push(100);

    cout<<"Size: "<<pq.size()<<endl;
    cout<<"Top: "<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}