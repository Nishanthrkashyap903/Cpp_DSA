// // #include<iostream>
// // using namespace std;
// // bool is_sorted(int a[],int size)
// // {
// //    if(size==0 ||size==1)
// //    {
// //     return true;
// //    }
// //    if(a[0]>a[1])
// //    {
// //     return false;
// //    }
// //    else{
// //     bool issmaller_sorted=is_sorted(a+1,size-1);
// //     return issmaller_sorted;
// //    }
// // }
// // int main()
// // {
// //   int a[5]={2,3,1,5,6};
// //   cout<<is_sorted(a,5);
// // }

// //Check the number in an array

// #include<iostream>
// using namespace std;
// bool check(int input[],int size,int x)
// {
//   if(size==0)
//   {
//     return false;
//   }
//   if(input[0]==x)
//   {
//     return true;
//   }
//   else{
//     bool small_arr=check(input+1,size-1,x);
//     return small_arr;
//   }
// }
// int main()
// {
//   int input[]={9,8,10};
//   int size=3;
//   int x=8;
//   if(check(input,size,x))
//   {
//     cout<<"true"<<endl;
//   }
//   else{
//     cout<<"false"<<endl;
//   }
// }

/* first index of arr*/

#include <iostream>
using namespace std;
int firstIndex(int input[], int size, int x)
{
  // Base conditions
  if(size==-1)
  {
    return -1;
  }
  if(input[0]==x)
  {
    return 0;
  }
  //
  int ans=firstIndex(input+1,size-1,x);
  if(ans!=-1){
     return ans+1;
  }
  else{
    return -1;
  }
}
int main()
{
  int n;
  cin >> n;
  int *input = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> input[i];
  }
  int x;
  cin >> x;
  cout << firstIndex(input, n, x) << endl;
}

/*Last index of number*/

// #include <iostream>
// using namespace std;
// int lastIndex(int input[], int size, int x)
// {
//   if(size==0)
//   {
//     return -1;
//   }
//   int ans=lastIndex(input+1,size-1,x);
//   if(ans!=-1)
//   {
//     return ans+1;
//   }
//   if(input[0]==x)
//   {
//     return 0;
//   }
//   else{
//     return -1;
//   }

// }

// int main()
// {
//   int n;
//   cin >> n;

//   int *input = new int[n];

//   for (int i = 0; i < n; i++)
//   {
//     cin >> input[i];
//   }

//   int x;

//   cin >> x;

//   cout << lastIndex(input, n, x) << endl;
// }

/*all indices of number*/

// #include <iostream>
// using namespace std;
// int allIndexes(int input[], int size, int x, int output[])
// {
//   if (size == 0)
//   {
//     return 0;
//   }
//   int ans = allIndexes(input + 1, size - 1, x, output);
//   if (input[0] == x)
//   {
//     for (int i = ans - 1; i >= 0; i--) // Shift the elements of output and increment
//     {
//       output[i + 1] = output[i] + 1;
//     }
//     output[0] = 0;
//     ans++;
//   }
//   else
//   {
//     for (int i = ans - 1; i >= 0; i++)  //increment the elements
//     {
//       output[i] = output[i] + 1;
//     }
//   }
//   return ans;
// }
// int main()
// {
//   int n;
//   cin >> n;

//   int *input = new int[n];

//   for (int i = 0; i < n; i++)
//   {
//     cin >> input[i];
//   }

//   int x;

//   cin >> x;

//   int *output = new int[n];

//   int size = allIndexes(input, n, x, output); // returns the size of output arr
//   for (int i = 0; i < size; i++)
//   {
//     cout << output[i] << " ";
//   }

//   delete[] input;

//   delete[] output;
// }