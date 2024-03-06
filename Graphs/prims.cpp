#include<iostream>
using namespace std;
#include<climits>
int findMinVertex(int n,bool* visited,int* weights){
    int minvertex=-1;
    int minweight=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && weights[i]<minweight)
        {
            minweight=weights[i];
            minvertex=i;
        }
    }
    return minvertex;
}
void prims(int** adj,int n)
{
    bool* visited=new bool[n];
    int* parent=new int[n];
    int* weights=new int[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
        weights[i]=INT_MAX;
    }
    parent[0]=-1;
    weights[0]=0;
    for(int i=0;i<n-1;i++)
    {
        //Min vertex in unvisited vertices
        int v=findMinVertex(n,visited,weights);
        //priority queue to improve time complexity O(n)->log(n)
        visited[v]=true;
        //find the adjacent to v and should be unvisited
        for(int j=0;j<n;j++)  
        {
            if(adj[v][j]!=0 && !visited[j])
            {
                if(weights[j]>adj[v][j]){
                    parent[j]=v;
                    weights[j]=adj[v][j];
                }
            }
        }
    }

    //MST 
    for(int i=1;i<n;i++)
    {
        if(parent[i]<i)
        {
            cout<<parent[i]<<" "<<i<<" "<<weights[i];
        }
        else{
            cout<<i<<" "<<parent[i]<<" "<<weights[i];
        }
        cout<<endl;
    }

}
int main(){
    int n;
    int e;
    cout<<"Enter the number of vertices:"<<endl;
    cin>>n;
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;
    int** adj=new int*[n];
    for(int i=0;i<n;i++)
    {
        adj[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s,weight;
        cout<<"Enter first and second vertex and weight:"<<endl;
        cin>>f>>s>>weight;
        adj[f][s]=weight;
        adj[s][f]=weight;
    }
    cout<<"Minimum Path is:"<<endl;
    prims(adj,n);
}