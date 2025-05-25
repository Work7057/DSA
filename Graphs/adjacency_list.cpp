#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //n -> no. of nodes
    //m -> no. of edges in the form of their connectivity -> x,y
    int n, m;
    cin>>n>>m;
    vector<int> adj[n+1];


    // For an undirected graph

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    // For a directed graph -> space compexity -> O(No. of Edges)

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        
    }
    
    return 0;
}