// #include<iostream>
// using namespace std;
// int main()
// {
// int a[] = {1, 2, 3, 4};
// int *p = a++;    //Error becoz base address will change
// cout << *p << endl;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     char b[]="abc";
//     char* c=&b[0];  
//     cout<<c<<endl;   //abc

//     char* d=&b[1];
//     cout<<d<<endl;  //bc

//     char *p = "hello";
//     cout << p<<endl; //hello
//     cout<<p[1]<<endl; //e
// }

// #include<iostream>
// using namespace std;
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }
     
// int main()
// {
//    char *x = "geeksquiz";
//    char *y = "geeksforgeeks";
//    char *t;
//    swap(x, y);   //After function call it doesnot reflect 
//    cout<<x << " "<<y;   //geeksquiz geeksforgeeks
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<sizeof(float)<<endl;
//   cout<<*ptr2<<" ";
//   cout<< ptr2<<endl ;
//   cout<<ptr1<<endl;
//   cout<<ptr2-ptr1<<" "<<ptr1+1<<" "<<ptr1+2;

//   return 0;
// }

#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}