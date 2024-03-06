// #include <iostream>
// using namespace std;
// int main()
// {
//          int x, y = 1;
//          x = 10;
//          if (x != 10 && x / 0 == 0)   //warning : division by zero is undefined [-Wdivision-by-zero]
//             cout << y;
//          else
//              cout << ++y;

// }

// #include <iostream>
// using namespace std;

// int main() {
// 	char c;
// 	c = cin.get();
// 	int count = 0;
// 	while (c != '$') {
// 		count++;
// 		c = cin.get();    //even it considers tab ,space characters
// 	}
// 	cout << count << endl;
// }

// break and continue
/*Program*/

/*check whether the number is Prime */

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

/*All primes from 2 to n*/
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int p=2;p<n;p++)
//     {
// 		bool prime=true;
// 		for(int d=2;d<p;d++)
// 		{
// 			if(p%d==0)
// 			{
// 				prime=false;
// 				break;
// 			}
// 		}
// 		if(prime)
// 		{
// 			cout<<p<<endl;
// 		}
// 	}
// }

/*Check the sequence*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int x = 1;
    bool isdec = true;
    while (x < n)
    {
        int curr;
        cin >> curr;
        if (prev == curr)
        {
            cout << "false";
            break;
        }
        else if (prev < curr)
        { // it can either 'true' or 'false'
            isdec = false;
            if (x == n - 1)
            {
                cout << "true"; // strictly incresing
            }
        }
        else
        {
            if (isdec == false)
            {
                cout << "false";
                break;
            }
        }
        prev = curr;
        x++;
    }
    if (isdec == true)
    {
        cout << "true";
    }
}