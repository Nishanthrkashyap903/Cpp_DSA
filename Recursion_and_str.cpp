
// Length of the char arr
//  #include<iostream>
//  using namespace std;
//  int length(char s[])
//  {
//      if(s[0]=='\0')
//      {
//          return 0;
//      }
//      else{
//          int small_length=length(s+1);
//          return 1+small_length;
//      }
//  }
//  int main(){
//      char str[100];
//      cin>>str;
//      int l=length(str);
//      cout<<l<<endl;
//  }

/*return all subsequences*/

// #include <iostream>
// using namespace std;
// int subs(string input, string output[])
// {
//     if (input.empty())
//     {
//         output[0]=" ";
//         return 1;
//     }
//     else{
//         string smallstring=input.substr(1);
//         int smalloutputsize=subs(smallstring,output); //4
//         for(int i=0;i<smalloutputsize;i++)
//         {
//             output[i+smalloutputsize]=input[0]+output[i];
//         }
//         return 2*smalloutputsize;
//     }
// }
// int main()
// {
//     string input;
//     cin>>input;
//     string *output = new string[1000];
//     int count = subs(input, output);
//     for (int i = 0; i < count; i++)
//     {
//         cout << output[i] << " "<<endl;
//     }
// }

// Alternative
/*Print all the subsequences of string*/

// #include<iostream>
// using namespace std;
// void printsubs(string input,string output)
// {
//     if(input.size()==0)
//     {
//         cout<<output<<endl;
//         return;
//     }
//     //Decision taking step
//     printsubs(input.substr(1),output);
//     printsubs(input.substr(1),output+input[0]);
// }
// int main()
// {
//     string input;
//     cin>>input;
//     string output="";
//     printsubs(input,output);
// }

#include <iostream>
using namespace std;
void printSubsetsOfArray(int input[],int n,int *output,int osize)
{
    if(n==0)
    {
        for(int i=0;i<osize;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
    }
    else{
        //simply passing the output arr as it is
        printSubsetsOfArray(input+1,n-1,output,osize);
        int *smalloutput=new int[100];
        //for storing output elements
        for(int i=0;i<osize;i++)
        {
            smalloutput[i]=output[i];
        }
        //appending first ele of input to smalloutput
        smalloutput[osize]=input[osize];
        printSubsetsOfArray(input+1,n-1,smalloutput,osize+1)  ;
        //here output arr size is incresed by 1 after appending
    }

}
void printSubsetsOfArray(int arr[], int length)
{
    int *output=new int[100];
    printSubsetsOfArray(arr,length,output,0);
}
int main()
{
    int input[1000], length;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    printSubsetsOfArray(input, length);
}