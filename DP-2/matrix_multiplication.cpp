#include <iostream>
using namespace std;
#include<climits>

int helper(int *arr,int start,int end)
{
    if(end==start+1)
    {
        return 0;
    }
    int minOps=INT_MAX;
    for(int k=start+1;k<=end-1;k++)
    {
        int totalOps=helper(arr,start,k)+helper(arr,k,end)+arr[start]*arr[k]*arr[end];
        if(totalOps<minOps)
        {
            minOps=totalOps;
        }
    }
    return minOps;
}

int matrixChainMultiplication(int* arr, int n) {
    // Write your code here
    return helper(arr,0,n);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n+1];

    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    cout << matrixChainMultiplication(arr, n);

    delete[] arr;
}