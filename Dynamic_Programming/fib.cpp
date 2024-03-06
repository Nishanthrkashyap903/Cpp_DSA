#include<iostream>
using namespace std;
int fib_helper(int n,int *ans)
{
    if(n<=1)
    {
        return n;
    }
    //check
    if(ans[n]!=-1)
    {
        return ans[n];
    }
    
    int a=fib_helper(n-1,ans);
    int b=fib_helper(n-2,ans);

    //Calculate and save for further use   
    ans[n]=a+b;

    //return
    return ans[n];
}
//memoization(recursion) top-down approach
int fib_2(int n)
{
    int* ans=new int[n+1];

    //initialize the array 
    for(int i=0;i<=n;i++)
    {
        ans[i]=-1;
    }
    return fib_helper(n,ans);
}
//Dynamic Programming

int fib_3(int n)
{
    int *ans=new int[n+1];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++)
    {
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fib_2(n)<<endl;
}

