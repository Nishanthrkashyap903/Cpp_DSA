#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int board[11][11];
bool isPossible(int n,int row,int column)
{
    //right diagonal

    int i=row-1;
    int j=column-1;
    while(i>=0 && j>=0)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        i--;
        j--;
    }

    //down 
    i=row-1;
    while(i>=0)
    {
        if(board[i][column]==1)
        {
            return false;
        }
        i--;
    }

    //left diagonal 
    i=row-1;
    j=column+1;
    while(i>=0 && j<n)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}
void Place_Nqueen_helper(int n,int row)
{
    if(row==n)
    {
        //print the board matrix
        //return
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"---------------------------------------------------------"<<endl;
        return; //backtracking
    }
    for(int j=0;j<n;j++)
    {
        if(isPossible(n,row,j))
        {
            board[row][j]=1;    //place the queen      
            Place_Nqueen_helper(n,row+1);
            board[row][j]=0;    //remove the queen
        }
    }
    return;       //backtrack if no correct position for queen in a particular row
}
void Place_Nqueen(int n)
{
    memset(board,0,11*11*sizeof(int));
    Place_Nqueen_helper(n,0);

}
int main()
{
    int n;
    cin>>n;
    int count=0;
    Place_Nqueen(n);
} 