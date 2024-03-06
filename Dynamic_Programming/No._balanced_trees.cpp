#include<iostream>
using namespace std;
#include<cmath>
int balanced_binary_trees(int h)
{
    if(h<=1)
    {
        return 1;
    }
    int mod=(int)pow(10,9)+7;

    int x=balanced_binary_trees(h-1);
    int y=balanced_binary_trees(h-2);

    int temp1=(int) ( (long)(x)*x % mod );
    int temp2=(int) ( 2*(long)(x)*y % mod );
    return (temp1+temp2) % mod;
    
}
int main()
{
    int h;
    cin>>h;
    cout<<balanced_binary_trees(h);
}