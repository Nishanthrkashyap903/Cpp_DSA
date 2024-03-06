#include <iostream>
using namespace std;

int lcs_DP(string s, string t) {
	int m = s.size();
	int n = t.size();
	int **output = new int*[m+1];

	for(int i = 0; i <= m; i++) {
		output[i] = new int[n+1];
	}

	// Fill 1st row
	for(int j = 0; j <= n; j++) {
		output[0][j] = 0;
	}

	// Fill 1st col
	for(int i = 1; i <= m; i++) {
		output[i][0] = 0;
	}

	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			// Check if 1st char matches
			if(s[m-i]==t[n-j]){
				output[i][j]=1+output[i-1][j-1];
			}
			else{
				output[i][j]=max(output[i-1][j],output[i][j-1]);
			}
		}
	}

	return output[m][n];
}

int lcs_mem(string s, string t, int **output) {
	int m=s.size();
	int n=t.size();

	if(s.size()==0 || t.size()==0)
    {
        return 0;
    }
	//Check if ans exists
	if(output[m][n]!=-1)
	{
		return output[m][n];
	}

	int ans;
	if(s[0]==t[0])
    {
        ans=1+lcs_mem(s.substr(1),t.substr(1),output);
    }
    else{
        int a=lcs_mem(s,t.substr(1),output);
        int b=lcs_mem(s.substr(1),t,output);

        ans=max(a,b);
    }
	//Save
	output[m][n]=ans;

	//return
	return ans;
}

int lcs_mem(string s, string t) {
	int m=s.size();
	int n=t.size();
	int **output=new int* [m+1];
	for(int i=0;i<=m;i++)
	{
		output[i]=new int[n+1];
		for(int j=0;j<=n;j++)
		{
			output[i][j]=-1;
		}
	}

	return lcs_mem(s,t,output);

}

int lcs(string s, string t) {
	// Base case

    if(s.size()==0 || t.size()==0)
    {
        return 0;
    }

	if(s[0]==t[0])
    {
        return 1+lcs(s.substr(1),t.substr(1));
    }
    else{
        int a=lcs(s,t.substr(1));
        int b=lcs(s.substr(1),t);

        return max(a,b);
    }

}
int main() {
	string s, t;
	cin >> s >> t;

	cout << lcs_DP(s, t) << endl;
	cout << lcs_mem(s, t) << endl;
	cout << lcs(s, t) << endl;

}

