#include<iostream>
using namespace std;
class Edges{
    public:
    int source;
    int destination;
    int weight;
};
bool compare(Edges e1,Edges e2)
{
    return (e1.weight<e2.weight) ;
}

int findParent(int v,int* parent)
{
    if(parent[v]==v)
    {
        return v;
    }
    int p=findParent(parent[v],parent);
    return p;
}

void kruskals(Edges* input,int n,int E)
{
    //Sort the weights in increasing order
    sort(input,input+E,compare);

    //MST 
    Edges* output=new Edges[n-1];

    int* parent=new int[n];

    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    }
    int count=0;
    int i=0;
    while(count!=n-1)
    {
        Edges currentEdge=input[i];
        int sourceParent=findParent(currentEdge.source,parent);
        int destinationParent=findParent(currentEdge.destination,parent);

        if(sourceParent!=destinationParent)
        {
            output[count]=currentEdge;
            count++;

            //Join and make one of them as parent
            parent[sourceParent]=destinationParent;
        }
        i++;
    }

    //Print all the output edges (MST)
    for(int i=0;i<n-1;i++)
    {
        if(output[i].source<output[i].destination)
            cout<<"Source: "<<output[i].source<<",destination: "<<output[i].destination<<",Weight: "<<output[i].weight<<endl;
        else
            cout<<"Source: "<<output[i].destination<<",destination: "<<output[i].source<<",Weight: "<<output[i].weight<<endl;
    }
}

int main()
{
    int n,E;
    cin>>n>>E;
    //All Edges

    Edges* input=new Edges[E];
    for(int i=0;i<E;i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].destination=d;
        input[i].weight=w;
    }
    kruskals(input,n,E);
}
