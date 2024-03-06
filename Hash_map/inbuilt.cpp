#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


int main()
{
    unordered_map<string,int> ourmap;
    
    //insert
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=2;
    //find
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("abc")<<endl;
    

    //for not inserted keys it throws exception

    // cout<<ourmap.at("dfi")<<endl;
    cout<<"Size:"<<ourmap.size()<<endl; 
    cout<<ourmap["dfi"]<<endl; //for keys not found its default value will be 0
    cout<<"Size:"<<ourmap.size()<<endl; 

    //check if an element is present or not

    if(ourmap.count("ghi")!=0)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }

    //erase
    cout<<"Size:"<<ourmap.size()<<endl;

    ourmap.erase("abc");

    if(ourmap.count("abc")>0)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }
    cout<<"Size:"<<ourmap.size()<<endl;
    cout<<ourmap.count("def")<<endl;

    
}