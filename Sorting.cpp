/*Selection sort*/

#include<iostream>
using namespace std;
void sort(int *arr,int n)
{
   //Code to run (n-1) rounds 
   for(int i=0;i<n-1;i++)
   {
    int min=arr[i];
    //Code for round 1,2,3,...,n-1
    for(int j=i+1;j<n;j++)      
    {
        //Code to find the minimum
        if(arr[j]<min)    
        {
           //swap
           int temp;
           temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
        }
    }
   }
   cout<<"---------------------------"<<endl;
}
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];       //   7 8 1 2 5 9 6
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    print(arr,n);
}

/*Bubble sort*/

//My code-Approach 1
// #include<iostream>
// using namespace std;
// void bubble_sort(int *input,int size)
// {
// int min;
// for(int round=0;round<size;round++)
// {
//     //code for round 1
//     int i=0;
//     for(;i<size-1;i++)
//     {
//         min=input[i];
//         for(int j=i+1;j<size;j++)
//         {
//             if(min>input[j])
//             {
//                 int temp;
//                 temp=input[i];
//                 input[i]=input[j];
//                 input[j]=temp;
//                 break;
//             }
//             break;
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<input[i]<<" ";    
//     }
//      cout<<"----round"<<round<<endl;
// }    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];       //   7 8 1 2 5 9 6
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     } 
//     bubble_sort(arr,n); 
// }

//Approach-2

// #include<iostream>
// using namespace std;
// void bubble_sort(int *input,int size)
// {
// //to run the (size-1) rounds
// for(int round=0;round<size-1;round++)
// {
//     //code for round 1
//     for(int i=0;i<size-round-1;i++)
//     {
//        //swapping adjacent elements
//        if(input[i]>input[i+1])
//        { 
//            int temp;
//            temp=input[i];
//            input[i]=input[i+1];
//            input[i+1]=temp;
//             //to print the progress
//             for(int i=0;i<size;i++)
//             {
//                  cout<<input[i]<<" "; 
//             }
//             cout<<endl;  //-->to print the  space for each progress 
//        }
//     }
//     cout<<"----round"<<round<<endl;
// }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];       //   7 8 1 2 5 9 6
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     } 
//     bubble_sort(arr,n); 
// }

/*Insertion sort*/



// #include<iostream>
// using namespace std;
// int main()
// {
//     int size=6;
//     int input[6]={5 ,0 ,7 ,4 ,8, 1 };
//     int i=0;
//     int k=0;
//     while(i<size)
//     {
//         while(input[i]!=0 && input[k]!=0)
//         {
//             i++;
//             k++;
//         }
//         while(input[i]==0 && input[k]==0)
//         {
//             i++;
//         }
//         while(input[i]==0 && input[k]!=0)
//         {
//             int temp;
//             temp=input[i];
//             input[i]=input[k];
//             input[k]=temp;
//             i++;
//             k++;
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<input[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[11]={2,2,1,1,2,1,0,0,1,2,2};
//     int n=11;
//     int nz=0;
//     int nt=n-1;
//     int input[n];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         {
//             input[nz]=0;
//             nz++;
//         }
//         else if(arr[i]==2)
//         {
//             input[nt]=2;
//             nt--;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<input[i]<<" ";
//     }
//     int i;
//     for(i=nz;i<=nt;i++)
//     {
//         input[i]=1;
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<input[i]<<" ";
//     }
// }

/*Dutch National Flag Problem
Sort 0,1,2
2,1,1,0,0,0,1,2,2,1,0
0 0 0 0 1 1 1 1 2 2 2
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=11;
//     int arr[]={2,1,1,0,0,0,1,2,2,1,0};
//     int nz=0;
//     int nt=n-1;
//     int i=0;
//     while(i<=nt)
//     {
//          if(arr[i]==0)
//          {
//              int temp=arr[i];
//              arr[i]=arr[nz];
//              arr[nz]=temp;
//              i++;
//              nz++;
//          }
//         else if(arr[i]==2)
//         {
//             int temp=arr[i];
//             arr[i]=arr[nt];
//             arr[nt]=temp;
//             nt--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }    