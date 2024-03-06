
/*Check whether the given number is prime or not*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int N;
//   cout<<"Enter the number :"<<endl;
//   cin>>N;
//   int d=2;
//   bool prime=true;
//   while(d<N)
//   {
//     if(N%d==0)
//     {
//       cout<<"Not prime"<<endl;
//       prime=false;
//       break;
//     }
//     d=d+1;
//   }
//   if(prime)
//   {
//     cout<<"Prime"<<endl;
//   }
// }


// #include<iostream>
// using namespace std;
//
//
// int main(){
//
//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//    int S,E,W;
//    cin>>S;
//    cin>>E;
//    cin>>W;
//    int x=S;
//    while(x<=E)
//    {
//        int c;
//        c=5*(x-32)/9;
//        cout<<x<<" "<<c<<endl;
//        x=x+W;
//    }
//
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   int var=1;
//   cout<<"enter the rows:"<<endl;
//   cin>>n;
//   int i=1;
//   while(i<=n)
//   {
//     int k=1;
//     while(k<=n-i)
//     {
//       cout<<" ";     //spaces in ith row
//       k=k+1;
//     }
//     int j=1;
//     while(j<=i)
//     {
//       cout<<var;      //printing of row values
//       j=j+1;
//       var=var+1;
//     }
//     cout<<endl;  //enter to next row
//     i=i+1;
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//
//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//   int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         int var=i;
//         while(j<=i)
//         {
//             cout<<var;
//             var=var+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//   int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int k=1;
//         while(k<=n-i)
//         {
//             cout<<" ";       //spaces are printed
//             k=k+1;
//         }
//         int j=1;
//         int var=i;
//         while(j<=i)
//         {
//             cout<<var;
//             var=var+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here
// 	int bas;
//     char grad;
//     cin>>bas;
//     cin>>grad;
//     double hra=0.2*bas;
//     double da=0.5*bas;
//     double pf=0.11*bas;
//     int all;
//     if(grad=='A')
//     {
//         all=1700;
//     }
//     else if(grad=='B')
//     {
//         all=1500;
//     }
//     else
//     {
//         all=1300;
//     }
//     double tot=bas+hra+da+all-pf;
//     int b=tot;
//     double a=tot-b;
//     if(a>=0.5)
//     {
//         cout<<b+1<<endl;
//     }
//     else
//     {
//     cout<<b<<endl;
//     }
// }

/*
****
****
****
****
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
1111
2222
3333
4444
*/
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         cout<<i;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// }

/*
1234
1234
1234
1234
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
4321
4321
4321
4321
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=n;
//     while(i>=1)
//     {
//         int j=n;
//         while(j>=1)
//         {
//             cout<<j;
//             j--;
//         }
//         cout<<endl;
//         i--;
//     }
// }

/*
1
12
123
1234
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<j<<"      ";
//             j=j+1;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
1
23
345
4567
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         int var=i;
//         while(j<=i)
//         {
//             cout<<var;
//             var++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
1
23
456
78910
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     int var=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<var;
//             var++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


/*
ABCD
ABCD
ABCD
ABCD
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         char a='A';
//         while(j<=n)
//         {
//             cout<<a;
//             a=a+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
ABCD
BCDE
CDEF
DEFG
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin>>n;
//    int i=1;
//    while(i<=n)
//    {
//     int j=1;
//     char a='A'+i-1;
//     while(j<=n)
//     {
//        cout<<a;
//        j++;
//        a++;
//     }
//     cout<<endl;
//     i++;
//    } 
// }

// #include<iostream>
// using namespace std;


// int main() {
    
//     /*  Read input as specified in the question.
//      * Print output as specified in the question.
//      */
//     int n;
//     cin>>n;
//     int i=n;
//     while(i>=1)
//     {
//         int var=i;
//         int j=1;
//         while(j>=n)
//         {
//             cout<<var;
//             var--;
//             j--;
//         }
//         cout<<endl;
//         i--;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int space=1;
//         while(space<=n-i)
//         {
//            cout<<" ";
//            space++;
//         }
//         int j=1;
//         while(j<=i)
//         {
//            cout<<"*";
//            j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
****
***
**
*
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n-i+1;            //   or    int j=1;
//         while(j>=1)             //   while(j<=n-i+1)
//         {                        // {
//             cout<<"*";          //     cout<<"*";
//             j--;                //     j++;
//         }                       //  }
//         cout<<endl;
//         i++; 
//     }
// }

/*
   1
  121
 12321
1234321
*/

// 1 approach
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int spaces=1;
//         while(spaces<=n-i)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int j=1;
//         while(j<=i)
//         {
//             cout<<j;
//             j++;
//         }
//         //another triangle
//         int var=i-1;
//         while(var>=1)
//         {
//             cout<<var;
//             var--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*2nd approach*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int spaces=1;
//         while(spaces<=n-i)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         int stars=1;
//         while(stars<=2*i-1)
//         {
//             cout<<"*";
//             stars++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

