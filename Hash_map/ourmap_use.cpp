#include<iostream>
#include"ourmap.h"
using namespace std;
int main()
{
    ourmap<int> map;
    for(int i=0;i<10;i++)
    {
        char c='0'+i;
        string key="abc";
        key=key+c;
        int value=i+1;
        map.insert(key,value);
        cout<<map.getLoadFactor()<<endl;
    }
    cout<<map.size()<<endl;
    map.remove("abc1");
    map.remove("abc2");

    for(int i=0;i<10;i++)
    {
        char c='0'+i;
        string key="abc";
        key=key+c;
        cout<<"Key:"<<key<<"Value:"<<map.getValue(key)<<endl;
    }
    cout<<map.size()<<endl;
}