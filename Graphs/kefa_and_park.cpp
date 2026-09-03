#include<bits/stdc++.h>

using namespace std;
#define ll long long
int ans = 0;

void dfs(int node, vector<int> adj[], int cnt, int m, vector<int> &cats, int parent)
{
    if(cats[node-1]==1)
    {
        cnt++;
    }
    else
    {
        cnt = 0;
    }

    if(cnt>m) return ;


    if(adj[node].size()==1 && node!=1)
    {
        if(cnt<=m) ans++;
        return;
    }

    for(auto &it: adj[node])
    {
        if(it!=parent)
        {
        dfs(it, adj, cnt, m, cats, node);
        }
    }
}


int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> cats(n);
    for(int i =0;i<n;i++)
    {
        cin>>cats[i];
    }

    vector<int> adj[n+1];
    for(int i=1;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    dfs(1, adj, 0, m, cats, 1);
    cout<<ans<<endl;
    return 0;
}