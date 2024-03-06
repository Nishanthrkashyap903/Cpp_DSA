#include <iostream>
using namespace std;

int knapsack(int *weights, int *values, int n, int maxWeight)
{
	//write your code here
    if(n==0 || maxWeight==0)
	{
		return 0;
	}

	if(weights[0]>maxWeight)
	{
		int leaveValue=knapsack(weights+1,values+1,n-1,maxWeight);
		return leaveValue;
	}

	int takeValue=values[0]+knapsack(weights+1,values+1,n-1,maxWeight-weights[0]);
	int leaveValue=knapsack(weights+1,values+1,n-1,maxWeight);

	return max(takeValue,leaveValue);
}

int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << knapsack(weights, values, n, maxWeight) << endl;

	delete[] weights;
	delete[] values;
}