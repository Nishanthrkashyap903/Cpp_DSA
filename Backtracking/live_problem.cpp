#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 9

bool findEmptyPositionOnBoard(int board[N][N],int& row,int & col){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(board[i][j]==0)
            {
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}

bool isSafeInRow(int board[N][N],int row,int num){
    for(int j=0;j<N;j++)
    {
        if(board[row][j]==num)
        {
            return false;
        }
    }
    return true;
}

bool isSafeInColumn(int board[N][N],int col,int num){
    for(int i=0;i<N;i++)
    {
        if(board[i][col]==num)
        {
            return false;
        }
    }
    return true;
}

bool isSafeInBox(int board[N][N],int row,int col,int num)
{
    int rowFactor=row-row%3;
    int colFactor=col-col%3;

    for(int i=rowFactor;i<rowFactor+3;i++)
    {
        for(int j=colFactor;j<colFactor+3;j++)
        {
            if(board[i][j]==num)
            {
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int board[N][N],int row,int col,int num){
    if(isSafeInRow(board,row,num) && isSafeInColumn(board,col,num) && isSafeInBox(board,row,col,num))
    {
        return true;
    }
    return false;
}

// solves the board and returns true if it solves otherwise false
bool solveSudoku(int board[N][N]){ 
    //empty position in board
    int row,col; 
    if(!findEmptyPositionOnBoard(board,row,col))
    {
        return true;
    }
    int num=1;
    while(num<=9)
    {
        if(isSafe(board,row,col,num))
        {
            board[row][col]=num;
            if(solveSudoku(board)){
                return true;
            }
            else{
            //make that cell as empty and try with remaining numbers in that particular cell
            board[row][col]=0;

            }

        }
        num++;
    }
    return false; //When no value from 1-9 satisfies then backtrack 
}

int main(){
    int board[N][N];
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            board[i][j]=s[j]-'0';
        }
    }
    if(solveSudoku(board)){
        cout<<"-----------------------------------------------"<<endl;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<board[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No solution"<<endl;
    }
    return 0; 
} 



//solves the board and returns true if it solves otherwise false
// bool solveSudoku(int board[9][9]){ 
//     int row,col; //empty cell pos
//     bool isEmpty=findEmptycell();
//     if(!isEmpty)
//     {
//         return true;
//     }
//     for(int num=1;num<=9;num++)
//     {
//         if(isSafe(num))
//         {
//             board[row][col]=num;
//             bool solved=solveSudoku(board);
//             if(!solved)
//             {
//                 board[row][col]=0;
//             }
//             else{
//                 return true;
//             }
//         }
//     }
//     return false;
// }