#include<iostream>
using namespace std;
#include<queue>


vector<int>* get_path_helper(int** edges,int n,int v1,int v2,bool* visited)
{
    
    if(v1==v2)
    {
        vector<int>* output=new vector<int>();
        output->push_back(v1);
        return output;
    }
    vector<int>* output=NULL;

    visited[v1]=true;

    for(int i=0;i<n;i++)
    {
        if(edges[v1][i]==1 && !visited[i])
        {
            output=get_path_helper(edges ,n, i , v2 , visited);
        }
        if(output!=NULL)
        {
            output->push_back(v1);
            return output;
        }
    }
    return output;
}

vector<int>* get_path_dfs(int** edges,int n,int v1,int v2)
{
    bool* visited=new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }

    vector<int>* result=get_path_helper(edges,n, v1, v2,visited);
    return result;
}

//DFS 
void dfs_print(int** edges,int n,int sv,bool* visited)
{
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++)
    {
        if(i==sv)
        {
            continue;
        }
        if(edges[sv][i])
        {
            if(visited[i])
            {
                continue;
            }
            dfs_print(edges,n,i,visited);
        }
    }
}

void dfs(int **edges,int n)
{
    //Initialize
    bool* visited=new bool[n];

    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    //for not connected graph
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            dfs_print(edges,n,i,visited);
        }
    }
}
//BFS

void Bfs_print(int **edges,int n,int sv,bool* visited)
{
    queue<int> pendingVertices;
    pendingVertices.push(sv);
    visited[sv]=true;
    while(!pendingVertices.empty() )
    {
        int front=pendingVertices.front();
        pendingVertices.pop();
        //find the adjacent elements of front
        for(int i=0;i<n;i++)
        {
            if(edges[front][i]) {
                if(i==front)
                {
                    continue;
                }
                if(visited[i])
                {
                    continue;
                }
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
        cout<<front<<endl;
    }
}
void Bfs(int** edges,int n)
{
    //Initialize
    bool* visited=new bool[n];

    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    //for not connected graph
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            Bfs_print(edges,n,i,visited);
        }
    }
}
int main()
{
    int n; // number of vertices
    int e; // number of edges
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++) {
      edges[i] = new int[n];
      for (int j = 0; j < n; j++) {
        edges[i][j] = 0;
      }
    }

    // Input
    for (int i = 0; i < e; i++) {
      int f, s;
      cin >> f >> s;
      edges[f][s] = 1;
      edges[s][f] = 1;
    }

    cout<<"Dfs: "<<endl;
    dfs(edges,n);
    cout<<"Bfs:"<<endl;
    Bfs(edges,n);

    int v1,v2;
    cin>>v1>>v2;
    cout<<"Path between "<<v1<<" and "<<v2<<":"<<endl;
    
    vector<int>* output=get_path_dfs(edges,n,v1,v2);
    if(output!=NULL)
    {
      for (int i = 0 ; i < output->size(); i++) {
        cout << output->at(i) << " ";
      }
    }
    else{
        cout<<endl;
    }

    //delete the memory
    for(int i=0;i<n;i++)
    {
        delete [] edges[i];
    }
    delete [] edges;
}