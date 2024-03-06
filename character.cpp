// #include<iostream>
// using namespace std;
// int main()
// {
//     char input[100];
//     // cin>>input;  //hello world
//     // cout<<input;  //hello
//     /*cin.getline*/
//     cin.getline(input,5);  //hello
//     cout<<input<<endl;  //hell
// }

/*Reverse the string*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     int i=0;
//     int j=strlen(input)-1;
//     while(i<j)
//     {
//         int temp=input[i];
//         input[i]=input[j];
//         input[j]=temp;
//         i++;
//         j--;
//     }
//     cout<<input<<endl;
// }

/*Trim spaces*/
//using 2 arrays
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char inp[20];
//     cin.get(inp,20);
//     char out[20];
//     int i=0;
//     int j=0;
//     while(inp[i]!='\0')
//     {
//         if(inp[i]!=' ')
//         {
//             out[j]=inp[i];
//              i++;
//              j++;
//         }
//         else{
//         i++;
//         }
//     }
//     out[j]='\0';
//     cout<<out<<endl;
// }

/*Reverse the word wise*/
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     int i=strlen(input)-1;
//     int j=strlen(input)-1;
//     int k=0;
//     char output[1000];
//     while(i>=0)
//     {
//         //check whether the char is not ' '
//         while(input[i]!=' ')
//         {
//           i--;
//           if(i==-1)
//           {
//               break;
//           }
//         }
//         //store the input in output array from i+1 to j
//         int a=i+1;
//         while(a<=j)
//         {
//             output[k]=input[a];
//             k++;
//             a++;
//         }
//         //to avoid giving space at last of output array
//         if(k==strlen(input))
//         {
//             break;
//         }
//         output[k]=' ';  //to give space after every word 
//         k++;
//         i--;
//         j=i;    
//     }
//     output[k]='\0';
//     cout<<output<<endl;
// }  

/*Print all the prefixes*/

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     char input[10];
//     cin>>input;
//     for(int end=0;end<strlen(input);end++)
//     {
//         for(int start=0;start<=end;start++)
//         {
//             cout<<input[start];
//         }
//         cout<<endl;
//     }
// }

/*Print all the substrings*/

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     char input[10];
//     cin>>input;
//     for(int i=0;i<strlen(input);i++)
//     {
//     for(int end=i;end<strlen(input);end++)
//     {
//     for(int start=i;start<=end;start++)
//     {
//         cout<<input[start];
//     }
//     cout<<endl;
//     }
//     cout<<"------------"<<endl;
//     }
// }

/*2D array to pass to a function*/

// #include <iostream>
// using namespace std;

// void printArray(int a[][5], int m, int n) {
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0;  j < n; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;	
// 	}
// }

// int main() {

// 	int a[5][5] = {{1, 2}, {3, 4}};
// 	printArray(a, 5, 5);

//     /*
// 	int a[100][100];
// 	int m, n;
// 	cin >> m >> n;

// 	// Taking input
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0; j < n; j++) {
// 			cin >> a[i][j];
// 		}
// 	}

// 	printArray(a, m, n);
//     */
//    /*
// 	// print array row wise
// 	cout << "Row wise : " << endl;
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0;  j < n; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;	
// 	}

// 	cout << "Column wise : " << endl;
// 	for(int j = 0; j < n; j++) {
// 		for(int i = 0; i < m; i++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
//     }
//     */
// }

#include<iostream>
using namespace std;
#include<cstring>
#include<string>
int main()
{
	int freq=5;
	string ans="hello";
	string out=ans;
	cout<<out;
	ans[1]='d';
	cout<<ans;
}