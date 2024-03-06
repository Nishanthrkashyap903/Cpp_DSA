#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *arr, int n, int num)
{
	//Write your code here
	sort(arr,arr+n);

	int start=0;
	int end=n-1;
	int count=0;
	while(start<end)
	{
		if(arr[start]+arr[end]>num)
		{
			end--;
		}
		else if(arr[start]+arr[end]<num)
		{
			start++;
		}
		else{

            if(arr[start]==arr[end])
			{
				int n=end-start+1;
				count+=(n*(n-1))/2;
				return count;
			}

			int tempStart=start+1;
			int tempEnd=end-1;

			while(tempStart<=tempEnd && arr[tempStart]==arr[start] )
			{
				tempStart++;
			}

			while(tempStart<=tempEnd && arr[tempEnd]==arr[end] )
			{
				tempEnd--;
			}

			int totalOfStart=tempStart-start;
			int totalOfEnd=end-tempEnd;

			count+=totalOfStart*totalOfEnd;

			start=tempStart;
			end=tempEnd;
		}
	}
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout <<"pairs" << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}