#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> words;
char crossword[10][10];

void printCrossWord(){
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<crossword[i][j];
        }
        cout<<endl;
    }
}

bool isValidVertical(int row,int col,int index){
    for(int i=0;i<words[index].length();i++)
    {
        if(crossword[row+i][col]=='-')
        {
            continue;
        }
        if(crossword[row+i][col]=='+')
        {
            return false;
        }
        else if(crossword[row+i][col]!=words[index][i])
        {
            return false;
        }
    }
    return true;
}

bool isValidHorizontal(int row,int col,int index){
    for(int i=0;i<words[index].length();i++)
    {
        if(crossword[row][col+i]=='-')
        {
            continue;
        }
        if(crossword[row][col+i]=='+')
        {
            return false;
        }
        else if(crossword[row][col+i]!=words[index][i])
        {
            return false;
        }
    }
    return true;
}

void setVertical(vector<bool>* helper,int index,int row,int col){
    for(int i=0;i<words[index].length();i++)
    {
        if(crossword[row+i][col]!='-')
        {
            helper->push_back(false);
        }
        else{
            crossword[row+i][col]=words[index][i];
            helper->push_back(true);
        }
    }
}

void setHorizontal(vector<bool>* helper,int index,int row,int col){
    for(int i=0;i<words[index].length();i++)
    {
        if(crossword[row][col+i]!='-')
        {
            helper->push_back(false);
        }
        else{
            crossword[row][col+i]=words[index][i];
            helper->push_back(true);
        }
    }
}

void resetVertical(vector<bool>* helper,int index,int row,int col){
    for(int i=0;i<words[index].length();i++)
    {
        if(helper->at(i))
        {
            crossword[row+i][col]='-';
        }
    }
}

void resetHorizontal(vector<bool>* helper,int index,int row,int col){
    for(int i=0;i<words[index].length();i++)
    {
        if(helper->at(i))
        {
            crossword[row][col+i]='-';
        }
    }
}

bool puzzleSolve(int index){
    if(index==words.size())
    {
        printCrossWord();
        return true;
    }

    int row,col;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(crossword[i][j]=='-' || words[index][0]==crossword[i][j])
            {
                row=i;
                col=j;
                if(isValidVertical(row,col,index))
                {
                    vector<bool>* helper=new vector<bool>();
                    setVertical(helper,index,row,col);
                    bool solved=puzzleSolve(index+1);
                    if(solved){
                        return true;
                    }
                    resetVertical(helper,index,row,col);
                }
                else if(isValidHorizontal(row,col,index))
                {
                    vector<bool>* helper=new vector<bool>();
                    setHorizontal(helper,index,row,col);
                    bool solved=puzzleSolve(index+1);
                    if(solved)
                    {
                        return true;
                    }
                    resetHorizontal(helper,index,row,col);
                }
            }
        }
    }
    return false;
}

int main(){
    
    // write your code here
    for(int i=0;i<10;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<10;j++)
        { 
            crossword[i][j]=s[j];
        }
    }
    string w;
    cin>>w;

    string s="";
    for(int i=0;i<w.length();i++)
    {
        if(w[i]==';')
        {
            words.push_back(s);
            s="";
            continue;
        }
        s=s+w[i];
    }
    words.push_back(s);
    puzzleSolve(0);

    return 0;
}