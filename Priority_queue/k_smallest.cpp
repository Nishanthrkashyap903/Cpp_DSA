#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include<queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> min;
    //built max priority queue
    vector<int> output;
    for(int i=0;i<k;i++)
    {
        min.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(min.top()>arr[i])
        {
            min.pop();
            min.push(arr[i]);
        }
    }
    while(!min.empty())
    {
        output.push_back(min.top());
        min.pop();
    }
    return output;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    delete[] input;
}