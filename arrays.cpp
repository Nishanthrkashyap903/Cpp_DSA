// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     cout << arr[0];  
// }

// #include <iostream>
// using namespace std;
// void func(int a[]) {
//     cout << sizeof(a) << endl;
// }

// int main() {
//     int a[10];
//     func(a);
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     //largest element in the array
//     int max=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     cout<<"Largest element is:"<<max<<endl;
// }

// #include<iostream>
// using namespace std;
// void printarr(int input[],int n)
// {
//     cout<<"In function:"<<sizeof(input)<<endl;   //8 bytes for pointer         
//     cout<<input<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<input[i]<<endl;
//     }
//     cout<<&(input[1])<<endl;
//     cout<<&(input[2])<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"enter the n:"<<endl;
//     cin>>n;
//     int input[100];
//     cout<<"enter the array element"<<endl;
//     cout<<input<<endl;
//     cout<<&(input[1])<<endl;
//     cout<<&(input[2])<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>input[i];
//     }
//     cout<<"Main:"<<sizeof(input)<<endl;   //4*100 bytes
//     printarr(input,n);
    
// }

/*Reverse the array*/

// #include <iostream>
// using namespace std;

// void printArray(int input[], int n) {
// 	for(int i = 0; i < n; i++) {
// 		cout << input[i] << " ";
// 	}
// 	cout << endl;
// }

// void reverse(int input[], int n) {
// 	int i = 0, j = n - 1;
// 	while(i < j) {
// 		int temp = input[i];
// 		input[i] = input[j];
// 		input[j] =temp;
// 		i++;
// 		j--;
// 	}
// }

// int main() {

// 	int a = 10;
// 	int b[10] = {1, 2, 3, 4, 5};
// 	reverse(b, 5);
// 	printArray(b, 5);

	
// }

/*find unique number*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,1,6,3,6,2};
//     for(int i=0;i<7;i++)
//     {
//         int j;
//         for(j=0;j<7;j++)
//         {
//             if(i!=j)
//             {
//                 if(arr[i]==arr[j])
//                 {
//                     break;
//                 }
//             }
//         }
//         if(j==7)
//         {
//             cout<<arr[i]<<endl;
//         }
//     }
// }

//another approach

// for(int i=0;i<size;i++)
//     { int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//       if(count==1)
//     {
//        // cout<<arr[i]<<endl;
//         return arr[i];
//     }

/*Sorting 0 and 1*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     int l=0;
//     int r=size-1;
//     while(l<r)
//     {
//         while(arr[l]==0)
//         {
//             l++;
//         }
//         while(arr[r]==1)
//         {
//             r--;
//         }
//         if(arr[l]==1 and arr[r]==0)
//         {
//             arr[l]=0;
//             arr[r]=1;
//             l++;
//             r--;

//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }