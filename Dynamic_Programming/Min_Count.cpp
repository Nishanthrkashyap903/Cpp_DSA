#include<iostream>
#include<cmath>
using namespace std;
// //Dynamic Programming
// int MinCount_dp(int n)
// {
//     int *ans=new int[n+1];
// 	ans[0]=0;
// 	ans[1]=1;
// 	int count;
// 	for(int i=2;i<=n;i++)
// 	{
// 		count=INT_MAX;
// 		for(int j=1;j<=sqrt(i);j++)
// 		{
// 			int small_count=ans[i-j*j];
// 			count=min(count,small_count);
// 		}
// 		ans[i]=count+1;
// 	}
// 	return ans[n];
// }
// int Min_count(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     int count=INT_MAX;
//     for(int i=1;i<=sqrt(n);i++)
//     {
//         int small_count=Min_count(n-i*i);
// 		count=min(count,small_count)+1;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<MinCount_dp(n);
// }


